def num(k,one,zero):
    l=[3,4]
    n=int(k)
    if(n==1):
        return 3
    if (n==2):
        return 4
    new_one=one[n-2]+3*zero[n-3]
    new_zero=2*zero[n-2]+2*one[n-3]
    
    l=[new_one,new_zero]
    return l

one=[3,4]
zero=[2,3]
# t=int(input())
l=[]
for i in range(1,100):
    l.append(i)
for i in range(len(l)):

    out=num(l[i],one,zero)
    if((out==3) or (out==4)):
        print(out)
    else:
        one.append(out[0])
        zero.append(out[1])
        print(out[0])
