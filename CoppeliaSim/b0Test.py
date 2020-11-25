from B0 import b0RemoteApi
import time

with b0RemoteApi.RemoteApiClient('b0RemoteApi_pythonClient', 'b0RemoteApi', 60) as client:

    def simulationStepStarted(msg):
        simTime = msg[1][b'simulationTime']
        print('Simulation step started. Simulation time: ', simTime)


    def simulationStepDone(msg):
        simTime = msg[1][b'simulationTime']
        print('Simulation step done. Simulation time: ', simTime)
        client.doNextStep = True

    #
    # def callb(msg):
    #     print(msg)
    client.simxGetSimulationStepStarted(client.simxDefaultSubscriber(simulationStepStarted))
    client.simxGetSimulationStepDone(client.simxDefaultSubscriber(simulationStepDone))
    client.simxStartSimulation(client.simxDefaultPublisher())

    client.simxSynchronous(True)

    # client.simxAddStatusbarMessage('Hello', client.simxDefaultPublisher())
    lconnect, left_motor = client.simxGetObjectHandle('Pioneer_p3dx_leftMotor', client.simxServiceCall())
    rconnect, right_motor = client.simxGetObjectHandle('Pioneer_p3dx_rightMotor', client.simxServiceCall())

    client.simxSetJointTargetVelocity(left_motor, 1, client.simxServiceCall())
    client.simxSetJointTargetVelocity(right_motor, 1, client.simxServiceCall())
    # changed = False


    # def stepSimulation(t):
    #     global changed
    #     if t > 3 and not changed:
    #         client.simxSetJointTargetVelocity(right_motor, 0.5, client.simxServiceCall())
    #         changed = True

        # if client.runInSynchronousMode:
        #     while not client.doNextStep:
        #         client.simxSpinOnce()
        #     client.doNextStep = False
        #     client.simxSynchronousTrigger()
        # else:
        #     client.simxSpinOnce()


    # vbool, vel = client.simxGetJointTargetVelocity(left_motor, client.simxServiceCall())
    # print(vel)
    # client.simxSetJointTargetVelocity(left_motor, 2, client.simxServiceCall())
    # vbool, vel = client.simxGetJointTargetVelocity(left_motor, client.simxServiceCall())
    # print(vel)
    # time.sleep(2)
    # client.simxSetJointTargetVelocity(left_motor, 0.5, client.simxServiceCall())
    # print(left_motor, right_motor)


    # startTime = time.time()
    # while time.time() < startTime + 5:
    #     stepSimulation(time.time() - startTime)

    client.simxStopSimulation(client.simxDefaultPublisher())
