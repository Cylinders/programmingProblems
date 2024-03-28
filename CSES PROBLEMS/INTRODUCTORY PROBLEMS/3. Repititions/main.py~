inp = input()
largestSum = 1
currentSum = 0
currentLetter = inp[0]
for x in inp: 
    if currentLetter != x: 
        currentLetter = x
        if currentSum > largestSum: 
            largestSum = currentSum
        currentSum = 1
    else: 
        currentSum += 1
        if currentSum > largestSum: 
            largestSum = currentSum
print(largestSum)
