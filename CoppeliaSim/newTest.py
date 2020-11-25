from CoppeliaSim import sim
import sys
import math

sim.simxFinish(-1)
clientID = sim.simxStart('127.0.0.1', 19999, True, True, 5000, 5)

if clientID != -1:
    print('Connected to server')

else:
    sys.exit('Connection Failed')

errorCode1, front_left = sim.simxGetObjectHandle(clientID, 'Pioneer_p3dx_leftMotor', sim.simx_opmode_blocking)
print(errorCode1, front_left)
# errorCode2, front_right = sim.simxGetObjectHandle(clientID, 'rollingJoint_fr', sim.simx_opmode_blocking)
# errorCode3, rear_left = sim.simxGetObjectHandle(clientID, 'rollingJoint_rl', sim.simx_opmode_blocking)
# errorCode4, rear_right = sim.simxGetObjectHandle(clientID, 'rollingJoint_rr', sim.simx_opmode_blocking)
# v = 0.2
# print(front_left)
# error, linear_vel, angular_vel = sim.simxGetObjectVelocity(clientID, front_left, sim.simx_opmode_oneshot)
# print(error, linear_vel, angular_vel)\
v = 2
error, linear_vel, angular_vel = sim.simxGetObjectVelocity(clientID, 20, sim.simx_opmode_streaming)
print(error, linear_vel, angular_vel)
error = sim.simxSetJointTargetVelocity(clientID, 20, v, sim.simx_opmode_oneshot)

print(error)
error, linear_vel, angular_vel = sim.simxGetObjectVelocity(clientID, 20, sim.simx_opmode_streaming)
print(error, linear_vel, angular_vel)
# sim.simxSetJointTargetVelocity(clientID, front_right, v, sim.simx_opmode_streaming)
#
# error, linear_vel, angular_vel = sim.simxGetObjectVelocity(clientID, front_left, sim.simx_opmode_streaming)
# print(linear_vel, angular_vel)
# print(wheel_handle)