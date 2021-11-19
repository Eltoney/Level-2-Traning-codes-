# You can import modules and use their functions 
# instead of writing it from scratch
import math

N = int(input())
nRoot = math.sqrt(N)
# If you want to control how many decimal places you want to be displayed.
# Use "{:.2f}".format(nRoot) to display 2 decimal places.
# If I want to display 9 decimal places I'll use the following code:
print("{:.9f}".format(nRoot))
