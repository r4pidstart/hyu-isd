import random
def get_random_string(str_len):
    string=[]
    for x in range(str_len):
        string.append(chr(random.randint(97,122)))
    return ''.join(string)

str_len=int(input())
print(get_random_string(str_len))