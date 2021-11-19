# The ":" in front of the variable name is just a type hint. it doesn't actually enforce the type!
# I personally use it to keep track of the different types of variables in my code. Makes it cleaner.
# It's optional. Don't use it if you don't want to.

T : int = int(input()) # All inputs are taken as strings. You need to cast it.

# In a for loop, We need to assign a variable to be the iterator. If the iterator won't be used in the code, 
# you can make the iterator "_" to save "i" for meaningful loops later on.
# range() takes an int as an argument and returns a range object, NOT a list. It contains values from 0 to
# (provided int - 1). You can also specify the start of the range. You can iterate over all the numbers in that range.
for _ in range(T):
    currNum : int = int(input())
    # Init a list containing one element being the number that was input.
    # Multiply that element N (currNum) times inside that one list.
    currList : list = [currNum] * currNum
    # Print all elements of that list without the braces and commas. Remove the "*" and see the difference.
    print(*currList)

# Another solution is to print the number N times but all on one line with spaces between them. Can you do it?
