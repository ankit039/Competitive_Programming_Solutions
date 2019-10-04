#Your code goes here Python 2
t=input()
cas=1
mod=1000000007
while(t>0):
    t=t-1
    n=input()
    print "Case "+str(cas)+": "+str(((n*(n-1)/2)%mod+(n*(n-1)*(n-2)*(n-3)/24)%mod+1)%mod)
    cas=cas+1
