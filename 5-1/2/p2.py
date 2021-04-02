import random

num=[]
biggest_number=0
for x in range (100):
    num.append(random.randint(1,1000))
    print(num[x], end=' ')
    if(biggest_number<num[x]):
        biggest_number=num[x]

print('\n'+"max value:", biggest_number)
