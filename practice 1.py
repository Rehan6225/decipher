

a=[38,-47,39,-30,23]
def absol(n):
    if(n>0):
        return n#python can return as many values nothing null exist in python
    else:
        return -1*n
res=0
#for i in a:
    #x=absol(i)
    #print(absol(i))
    #res+=absol(i)
    #res+=abs(i)
print(res)
print(list(map(absol,a)))
res=[]
for i in a:
    res.append(absol(i))
print(res)
