def print_star_dia(n):
    for x in range(n):
        for y in range(n-x-1):
            print(' ', end='')
        for y in range(x+1):
            print('*', end=' ')
        print()
    for x in range(n):
        for y in range(x):
            print(' ', end='')
        for y in range(n-x):
            print('*', end=' ')
        print()

n=int(input())
print_star_dia(n)