


#Print Pattern



# input = 5 

# 1
# 2 9
# 3 8 10
# 4 7 11 14
# 5 6 12 13 15



import math

n = int(input())
l=[list() for _ in range(n)]
x=1
for i in range(n):
    c=0
    for j in range(1, 1+sum([n-i for i in range(n)])):
        if c!=(n-i):
            l[i].append(x)
            x+=1
            c+=1
    
for i in range(n):
    if i%2==1:
        l[i]=l[i][::-1]


for i in range(len(l)):
        l[i] = list(map(str,l[i]))

res=[]
for i in range(len(l)):
        if len(l[i])!=n:
                l[i]= [' ']*(n-len(l[i])) + l[i]
        


for i in zip(*l):
        print(' '.join(i))

