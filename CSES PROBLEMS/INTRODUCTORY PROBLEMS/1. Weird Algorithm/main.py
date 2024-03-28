inp = int(input()) 
print(inp)
while inp!=1: 
    if (inp % 2 == 1): 
        inp = (inp * 3) + 1
    else: 
        inp = (inp / 2)

    print(int(inp)) 
