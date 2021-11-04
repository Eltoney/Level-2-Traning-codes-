import math
PI = 3.14159
side1, side2 = [float(x) for x in input().split()]
side3 = math.sqrt(math.pow(side1, 2) + math.pow(side2, 2))
R = side3 / 2
totalCircleArea = PI * math.pow(R, 2)
print("{:.4f}".format(totalCircleArea / 2))
