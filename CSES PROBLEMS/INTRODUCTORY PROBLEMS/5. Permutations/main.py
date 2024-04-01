x = int(input())

if x == 1: 
    print(1)
    exit
if x < 4: 
    print("NO SOLUTION") 
else: 
    for a in range(2, x+1, 2): 
        print(str(a) + " ", end="") 
    for a in range(1, x+1, 2): 
        print(str(a) + " ", end="")
