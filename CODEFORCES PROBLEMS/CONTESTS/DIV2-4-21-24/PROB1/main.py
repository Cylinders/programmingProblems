numResponses = int(input())
responses = []
for i in range(numResponses):
    num = input()
    responses.append(input().split())
for l in responses: 
    d = {}
    for x in l: 
        try: 
            d[x] += 1
        except: 
            d[x] = 1
    total = 0
    for value in d.values(): 
        total += value / 3

    print(total) 
