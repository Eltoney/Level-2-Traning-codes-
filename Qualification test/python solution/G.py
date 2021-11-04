# In python, we don't need to specify the length of the list as it's dynamic.
# In other words. Unless we want the length of the array in some operation other than allocation,
# The N is useless.
# Due to the way tests were written starting from test 3: we actually need N
# The tests were written assuming the solution was going to be written in C++, and Y was written as the last element of the array.
# Or the writer forgot to write a new line while generating the tests. It didn't matter with CPP because "cin" reads whatever's next in the buffer.
# It doesn't care if it's on a new line or not.
# Every time python takes an input, it expects a new line. That's why a runtime error pops up. There was no new line for Y and python was waiting for it.
# The workaround in this problem is to check the length of the actual array. if it matches the expected (N) it takes Y from a new line (First 2 examples)
# If the length differs (Y is at the end of the array) then Y is taken as the last element of that array and the last element is excluded from the array.
N = int(input())
arr = [int(x) for x in input().split()]
if len(arr) == N:
    Y = int(input())
else:
    # -1 index referes to the last element of the array. read more here: https://www.i2tutorials.com/what-are-negative-indexes-and-why-are-they-used/
    Y = arr[-1]
# Array slicing. Read more here: https://stackoverflow.com/questions/509211/understanding-slice-notation
arr = arr[:N]
ans = 0
# This is a for each loop. The i takes the values of the elements inside the 
# iterable that's being iterated on. Read more here: https://www.w3schools.com/python/python_for_loops.asp
for i in arr:
    if (i + Y) % 3 == 0:
        ans += 1
print(ans)
