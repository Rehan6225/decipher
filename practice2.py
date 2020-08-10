def getFib(n):
    l=[0,1]
    if(n==0):
        return
    if(n==1):
       return
    if (n==2):
        return
    for i in range(n):
        print("B4 : ",l)
        l.append(l[-1]+l[-2])#using last two elements not l[1] or l[2]
        print("after : ",l)
    print(l)
    print(l[st:en])
getFib(10)
