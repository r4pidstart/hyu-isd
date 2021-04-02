
string=input().split()
words={}

for x in string:
    if(x in words):
        words[x]+=1
    else:
        words[x]=1

for x in list(words.keys()):
    print(x+':', words[x])