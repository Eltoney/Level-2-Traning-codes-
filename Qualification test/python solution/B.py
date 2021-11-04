# The ":" in front of the variable name is just a type hint. it doesn't actually enforce the type!
# I personally use it to keep track of the different types of variables in my code. Makes it cleaner.
# It's optional. Don't use it if you don't want to.

strInput : str = input()
strOutput : str = ""
if strInput == "7ob":
    strOutput = "Ya wili mno"
elif strInput == "Znb":
    strOutput = "Ma atob 3no"
else:
    strOutput = "73ish fi gra7"
print(strOutput)
