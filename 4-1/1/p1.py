num=int(input())

for x in range(num):
    if((x%2==0 or x%3==0) and x!=0):
        print(x)