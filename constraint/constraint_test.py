from constrain import *
import pandas as pd
import random

num_peaches = 15
distance = 18
max_size = 10

# each peach is represented by a tuple that is (x, y, z, size)
peachlets = []
for i in range(num_peaches):
    peach = (0, 0, random.uniform(0, 1) * distance, random.uniform(0, 1) * max_size)
    peachlets.append(peach)

peachlets.sort()

print('***********************')
print(peachlets)
print('***********************')
print(get_solution_old(peachlets))

x = []
y = []
z = []
radius = []
pose = [1 for x in range(num_peaches)]
remove = [False for x in range(num_peaches)]
for i in range(num_peaches):
    peach = peachlets[i]
    x.append(peach[0])
    y.append(peach[1])
    z.append(peach[2])
    radius.append(peach[3])


d = {'X': x,
     'Y': y,
     'Z': z,
     'Radius': radius,
     'Pose': pose,
     'Remove': remove}
peachlets = pd.DataFrame(data=d)

picking = get_solution(peachlets)

print(picking)
