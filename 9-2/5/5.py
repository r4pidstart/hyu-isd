def combination(n,r):
    if(n-r==1 or r==1):
        return n
    if(n==0 or n==r):
        return 1
    return combination(n-1,r)+combination(n-1,r-1)

n=int(input())
r=int(input())
print(combination(n,r))