

l = list(map(int,input().split()))

t = 0
m = 0

for i in range(len(l)-1):
	m = l.index(min(l[i+1:]))
	if l[i] > l[m]:
		t = l[i]
		l[i] = l[m]
		l[m] = t

print(l)		

