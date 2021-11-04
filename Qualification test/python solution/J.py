N = int(input())
# Integer division: https://www.geeksforgeeks.org/division-operator-in-python/
evenNumber = N // 2
# Finding sum of first N natural numbers
sumNatural = (N * (N + 1)) // 2
# Finding sum of first N even numbers (CAREFUL. 4 IS THE SECOND EVEN NUMBER BECAUSE 4 // 2 = 2)
sumEvens = evenNumber * (evenNumber + 1)
# Finding sum of first N odd numbers = sum of first N natural nubmers - sum of first N even.
sumOdds = sumNatural - sumEvens
# Finding abs diff
absDiff = abs(sumEvens - sumOdds)
print(absDiff)    
