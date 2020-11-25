import socket
import time


def MoveTo(pose, host, port):
    moved = False
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    s.bind((host, port))  # Bind to the port.
    s.listen(5)  # Wait for UR3 (client) connection.
    c, address = s.accept()  # Establish connection with client.
    while not moved:
        try:
            msg = c.recv(1024).decode()  # Receive message from UR3.
            if msg == 'UR3_is_asking_for_data':
                # print("   UR3 is asking for data...")
                moved = True
                time.sleep(0.5)
                # Cartesian tool pose (X,Y,Z,Roll,Pitch,Yaw).  Note: units are meter and rad.
                pose_string = "(" + str(pose[0])
                for value in pose[1:]:
                    pose_string = pose_string + "," + str(value)
                pose_string = pose_string + ")"
                # print("   Pose string data to send: " + pose_string)
                c.send(pose_string.encode())
        except socket.error as socket_error:
            continue


def end(host, port):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    s.bind((host, port))  # Bind to the port.
    s.listen(5)  # Wait for UR3 (client) connection.
    c, address = s.accept()  # Establish connection with client.
    c.close()
    s.close()
