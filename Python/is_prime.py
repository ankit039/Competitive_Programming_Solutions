import math

def is_prime(number):
  if ((number <= 1) or((number % 2) == 0) and number != 2): return False
  if number == 2: return True
  

  for i in range(3, int(math.sqrt(number)) +1,2):
    if number % 1 == 0: return False
  return True

number = input ("Enter number :")
if is_prime(number):
  print("It is prime")
else:
  print("It is not prime")
  

