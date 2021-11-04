# The ":" and "->" in front of the variable name is just a type hint. it doesn't actually enforce the type!
# I personally use it to keep track of the different types of variables in my code. Makes it cleaner.
# It's optional. Don't use it if you don't want to.

T : int = int(input())
for _ in range(T):
    bigNum = int(input())
    # This line is complicated. Let's break it down.
    # Remember that what comes out of the "input()" function is a string. We can use the "split()" method to split words
    # or charactes or numbers or anything that are seperated by a seperator. read more here: https://www.w3schools.com/python/ref_string_split.asp
    # split() returns a list. we can iterate over that list with a simple for loop and do whatever we want with it.
    # List comprehension offers shorter syntax for that. read more here: https://www.w3schools.com/python/python_lists_comprehension.asp
    # The last part is multiple assignments. Read more about it here. https://stackoverflow.com/questions/31426095/assign-multiple-values-of-a-list
    firstNum, secondNum = [int(x) for x in input().split()]
    answerList : list = []
    # If you want your range to include the element you provided then add + 1 to it.
    # Read more here: https://www.w3schools.com/python/ref_func_range.asp
    for i in range(bigNum + 1):
        if ((i % firstNum == 0 or i % secondNum == 0) and not (i % firstNum == 0 and i % secondNum == 0)):
            answerList.append(i)
    # Sorts the list in place (edits original list)
    answerList.sort(reverse=True)
    # Print all elements of list without commas or braces.
    print(*answerList)
