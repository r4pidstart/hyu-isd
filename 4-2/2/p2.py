def problem_desc():
    print("* Number of divisors *")

def get_num_of_div(n):
    count=0
    for x in range(1,n+1):
        if(n%x==0):
            count+=1
    return count

problem_desc()
print("First number")
n1=int(input())
print("Second number")
n2=int(input())
print("First:",get_num_of_div(n1))
print("Second:",get_num_of_div(n2))