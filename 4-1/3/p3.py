def add_total(n):
    res=0
    for x in range(n+1):
        res+=x
    return res

def mul_total(n):
    global g_mul
    for x in range(1,n+1):
        g_mul*=x

n=int(input())

g_mul=1
mul_total(n)

print("add_total():", add_total(n))
print("gMul:", g_mul)