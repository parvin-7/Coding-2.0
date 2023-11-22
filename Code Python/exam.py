# Import math Library
import math
#Return the value of 9 raised to the power of 3
print(math.pow(2, 3))
import random
print(random.randint(1, 5))
print(math.sqrt(4))

def my_function(country = "Norway"):
 print("I am from " + country)
my_function("Sweden")
my_function("India")
my_function()
my_function("Brazil")

def tri_recursion(k):
 if(k > 0):
  result = k + tri_recursion(k - 1)
  print(result)
 else:
  result = 0
 return result

print("\n\nRecursion Example Results")
tri_recursion(6)

x=lambda a,b,c:a+b+c
print(x(66,44,55))

def myfun(n):
  return lambda a:a*n

mytripler = myfun(3)

print(mytripler(11))