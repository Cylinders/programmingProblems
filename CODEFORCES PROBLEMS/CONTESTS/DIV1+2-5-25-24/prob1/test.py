numCases = int(input())
cases = []

if numCases > -1: 
    for i in range(numCases): 
        input() 
        cases.append(input().split())

    for case in cases: 
        for num in case: 
            num = int(num)
else: 
    cases = [[1 , 1, 4, 5, 1, 4],[7,9,2,2,3],[1,2,3]]



for case in cases: 
    d = [0]
    # dropoff points
    for i in range(len(case) - 1): 
        if case[i] > case [i+1]: 
            d.append(i + 1)
    n = False  
    for i in range(len(d)-1):
        if case[d[i]] < case[d[i+1]]: 
            print("No")
            n = True
            break 
    if not n: 
        print("Yes")
            
