def elevator(direction, l):
    top = 0
    l.sort()
    above = []
    below = []
    for i in range(len(l)):
        if curr < l[i]:
            above.append(l[i])
        else:
            below.append(l[i])
    if direction == "UP":
        for i in above:
            print(i)
        below = below[::-1]
        for i in below:
            print(i)
    if direction == "DN":
        below = below[::-1]
        for i in below:
            print(i)
        for i in above:
            print(i)
        


direction = input()
curr = int(input())
n = int(input())
l = []
for i in range(n):
    k = int(input())
    l.append(k)
elevator(direction, l)
