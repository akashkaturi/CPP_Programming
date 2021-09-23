#%%
def factorial(n):
    if(n==0):
        return 1
    fact=factorial(n-1)
    return n*fact
n=int(input())
if(n<=50):
    numerator=factorial(n)
    denominator=factorial(n-2)
    ans=numerator/(denominator*2)
    print(int(ans))
else:
    print("Wrong Input") 
    

# %%
def check(s):
    ans=True 
    for _ in s:
        ans=True 

    if s[0].isnumeric()==True:
        ans=False 
    for i in s:
        if i=='_':
            continue
        elif i.isalnum()==False:
            ans=False
            
    return ans
s=input()
f_s=s.split("_")
print(check(s))

        
    
    