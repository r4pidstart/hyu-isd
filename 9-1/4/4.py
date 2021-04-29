def sum(res, n):
    if(n==0):
        return res
    res=n+res
    return sum(res, n-1)

num=int(input())
print(sum(0,num))