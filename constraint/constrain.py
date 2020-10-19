import constraint
import math
import numpy as np

# this requires the constraint library.  It can be installed by using 'pip install python-constraint'

def get_solution(peaches):
    '''
    This method will take a list of tuples representing the peaches and return a list of 1's and 0's representing
    keeping and pruning.  THe 1's show a peachlet will be kept and 0's indicate the need for pruning.
    :param peaches: A list of tuples, with each tuple representing a peachlet of the form (x, y, z, size).
    :return: A list of 0's and 1's for prune and keep
    '''

    original_peaches = peaches.copy()

    distances = {}
    # for peach in peaches:
    for peach_num, peach in peaches.iterrows():
        distances[peach_num] = {}
        # for peach_two in peaches:
        for peach_two_num, peach_two in peaches.iterrows():
            distances[peach_num][peach_two_num] = math.sqrt((peach['X'] - peach_two['X'])**2 +
                                                            (peach['Y'] - peach_two['Y'])**2 +
                                                            (peach['Z'] - peach_two['Z'])**2)

    def distance_constraint(*args):

        for i in range(len(args)):
            if args[i] == 1:
                for j in range(i + 1, len(args)):
                    if args[j] == 1:
                        if distances[i][j] < 6:
                            # nope the two peachlets are too close
                            return None

        # looks like a good one
        return True

    # define our problem
    problem = constraint.Problem()

    peach_ids = []

    # each one of the peaches can be 0 pick or 1 (leave)
    for peach_num, peach in peaches.iterrows():
        problem.addVariable(peach_num, [0, 1])
        peach_ids.append(peach_num)

    # everyone needs to be at least 6 inches away
    problem.addConstraint(distance_constraint, peach_ids)

    # get all the solutions
    solutions = problem.getSolutions()

    # pick the best solution
    vals = (np.array([list(x.values()) for x in solutions]) * original_peaches['Radius'].values.reshape(1, -1)).sum(axis=1)
    best_solution = solutions[vals.argmax()]

    # create the array that has the ones to prune set to True
    answer = peaches.copy()
    prune = []
    for one in best_solution:
        prune.append(best_solution[one] == 0)

    answer['Remove'] = prune

    return answer

def get_solution_old(peaches):
    '''
    This method will take a list of tuples representing the peaches and return a list of 1's and 0's representing
    keeping and pruning.  THe 1's show a peachlet will be kept and 0's indicate the need for pruning.
    :param peaches: A list of tuples, with each tuple representing a peachlet of the form (x, y, z, size).
    :return: A list of 0's and 1's for prune and keep
    '''

    original_peaches = peaches.copy()

    peaches = [(x, y, z, size, count) for count, (x, y, z, size) in enumerate(peaches)]

    distances = {}
    for peach in peaches:
        peach_num = peach[4]
        distances[peach_num] = {}
        for peach_two in peaches:
            distances[peach_num][peach_two[4]] = math.sqrt((peach[0] - peach_two[0]) ** 2 +
                                                           (peach[1] - peach_two[1]) ** 2 +
                                                           (peach[2] - peach_two[2]) ** 2)

    def distance_constraint(*args):

        for i in range(len(args)):
            if args[i] == 1:
                for j in range(i + 1, len(args)):
                    if args[j] == 1:
                        if distances[i][j] < 6:
                            # nope the two peachlets are too close
                            return None

        # looks like a good one
        return True

    # define our problem
    problem = constraint.Problem()

    peach_ids = []

    # each one of the peaches can be 0 pick or 1 (leave)
    for peach in peaches:
        problem.addVariable(peach[4], [0, 1])
        peach_ids.append(peach[4])

    # everyone needs to be at least 6 inches away
    problem.addConstraint(distance_constraint, peach_ids)

    # get all the solutions
    solutions = problem.getSolutions()

    # now find the solution with the largest mass of total kept peaches
    largest = -1
    best_solution = None
    for solution in solutions:
        size = 0
        for i in solution:
            if solution[i] == 1:
                size += original_peaches[i][3]

        if size > largest:
            best_solution = solution
            largest = size

    answer = []
    for one in best_solution:
        answer.append(best_solution[one])

    return answer

