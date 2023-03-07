import unittest

def test_split(my_input,lst):
    assert my_input.split() == lst
    
def test_toINT(x,y,n):
    assert isinstance(x,int)
    assert isinstance(y,int)
    assert isinstance(n,int)
    

def test_ismodulus(x,y,i):
    assert i % x != 0
    assert i % y != 0


x=0
y=0
n=0

my_input = input("")
lst = my_input.split()

x = int(lst[0])
y = int(lst[1])
n = int(lst[2])

for i in range(1,n+1):
    if i % x == 0 and i % y == 0:
        print("FizzBuzz")
        continue
    elif i % x == 0:
        print("Fizz")
        continue
    elif i % y == 0:
        print("Buzz")
        continue
    else:
        print(i)
        continue