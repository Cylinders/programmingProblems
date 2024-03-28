inputString = input() 
largest = 0
length = len(inputString)
for left in range(length-1): 
    right = left
    currentSum = 0
    final = 0
    for a in range(left + 1, length-1):
        if (inputString[left] == inputString[a]): 
            currentSum += 1
        else:
            final = a 
            break
    if currentSum > largest: 
        largest = currentSum
    if final == length-1: 
        break
print(largest+1)
