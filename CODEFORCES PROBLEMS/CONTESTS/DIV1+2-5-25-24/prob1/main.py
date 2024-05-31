numCases = int(input())
from datetime import datetime
startTime = datetime.now()

cases = []

#input handling

for i in range(numCases): 
    input()
    cases.append(input().split())
caseResults = []
for case in cases: 
    for i in range(len(case)): 
        
        s = case[i:] + case[:i]
        increasing = False
        for a in range(len(s)-1):
            if (s[a] < s[a+1]):
                increasing = True
                break     
        
        if not increasing: 
            print(caseResults.append("Yes"))
            break 
        else: 
            if i == len(case) - 1:
                print("No")
print(startTime - datetime.now())