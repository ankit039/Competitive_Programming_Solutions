def factorial(num):
    fact =1
    if num<0:
        print("Enter a valid number")
    elif num==0:
        print("1")
    else:
        for i in range(1,num+1):
            fact = fact * i
        print(fact)
num = int(input("Enter a number: "))
factorial(num)
    
