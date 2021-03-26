def print_line(n):
    for x in range(n):
        print(x+1, end=' ')
    print()

n=int(input())

for x in range(n+1):
    print_line(x)

for x in range(n):
    print_line(n-x)
