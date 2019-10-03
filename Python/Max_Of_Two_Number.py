def max(x,y):
    if(x>y):
        print "x is larger",x
    elif(x==y):
        print 'Values are equal'   
    else:
        print 'y is larger',y

x=input('Enter a number')
y=input('Enter another number')

print (max(x,y))
