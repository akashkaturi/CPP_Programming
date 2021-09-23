#%%

n=['he','hello','cat','cat','dog','dog']
s=[]
d=dict()
for i in n:
    try:
        d[i]+=1
    except:
        d[i]=1
for i,j in d.items():
    if int(j)>1:
        s.append(i)
h=" ".join(s)

return h

# %%
s=xyyxabcdefx
