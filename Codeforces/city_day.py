Problem statement : https://codeforces.com/contest/1199/problem/A

Solution :

n, x, y = [int(x) for x in input().split(' ')]
ent = input().split(' ')
 
for i in range(n):
    ent[i] = int(ent[i])
 
pos = 0
while True:
    resp = 'yeap'
    for i in range(x):
        if (pos - i - 1) < 0 or pos < 0 or pos > len(ent) - 1:
            break
        
        if ent[pos - i - 1] <= ent[pos]:
            resp = 'nope'
            break
    if resp != 'nope':
        for i in range(y):
            if (pos + i + 1) > len(ent) - 1 or pos < 0 or pos > len(ent) - 1:
                break
            
            if ent[pos + i + 1] <= ent[pos]:
                resp = 'nope'
                break
            
    if resp == 'nope':
        pos += 1
        resp = 'yeap'
    else:
        break
 
if pos >= len(ent):
    print (pos)
else:
    print (pos + 1)
            


