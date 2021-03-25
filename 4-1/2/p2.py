def add(a,b):
    return a+b

def sub(a,b):
    return a-b

def mul(a,b):
    return a*b

def div(a,b):
    return a/b

def mod(a,b):
    return a%b

def print_msg():
    print('completed')

a=int(input())
b=int(input())

print("add", add(a,b))
print("sub", sub(a,b))
print("mul", mul(a,b))
print("div", div(a,b))
print("mod", mod(a,b))

print_msg()