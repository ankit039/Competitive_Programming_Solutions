def abs(num):
    if num < 0:
        val = num * -1
    else:
        val = num
    print("Absolute value of ",num," is: ",val)
while True:
    try:
        num = int(input("Enter a number: "))
        break
    except ValueError:
        print("Oops!  That was no valid number.  Try again...")
abs(num)