from constrain import *

# each peach is represented by a tuple that is (x, y, z, size)
peachlets = [(0, 0, 0, 1),
             (0, 0, 1, 10),
             (0, 0, 1, 2),
             (0, 0, 6, 1),
             (0, 0, 6.2, 5),
             (0, 0, 13, 3),
             (0, 0, 13, 4)]

get_solution(peachlets)
