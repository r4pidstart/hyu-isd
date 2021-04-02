a,a_score=input().split()
b,b_score=input().split()
c,c_score=input().split()

score = {a:a_score, b:b_score, c:c_score}

target=input("Witch student's score?\n")

if (target in score):
    print(target+"'s score:", score[target])
else:
    print(target+" is not in the database.")
