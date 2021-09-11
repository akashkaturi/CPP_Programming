#%%
n=[int(i) for i in input().split(" ")]
types=n[2]
delivery_fee=n[1]
total_amount=n[0]
sum=0
count=0
for i in range(types):
    order=[int(i) for i in input().split(" ")]
    if(types==1):
        count=8
        break
    if(sum<total_amount and delivery_fee<total_amount):
        if order[1]==0:
            sum+=(n[1]+order[0])
            count+=1
        else:
            while(order[1]!=0 or sum<total_amount):
                sum+=(delivery_fee+order[0])
                order[1]-=1
                count+=1
    else:
        break 
print(count)