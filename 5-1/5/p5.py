import random
def get_random_string(str_len):
    string=[]
    for x in range(str_len):
        string.append(chr(random.randint(97,122)))
    return ''.join(string)


cheese_size=int(input("Input the length of the string : "))
cheese=get_random_string(cheese_size)
original=cheese
eaten=str()
print("Generaged Cheese is '"+cheese+"'")
print()

for x in range (10):
    char=chr(random.randint(97,122))
    while(char in eaten):
        char=chr(random.randint(97,122))
    eaten=eaten+' '+char

    print("Start eating '"+char+"'")
    print("Eaten alphabet of cheese :"+ eaten)
    print("Original cheese :", original)

    for x in range(len(cheese)):
        if(cheese[x]==char):
            cheese=cheese[0:x]+'_'+cheese[x+1:len(cheese)]
    print("Current cheese status:", cheese)
    print()