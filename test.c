
#include<stdio.h>

typedef struct _person
{
    char name[7];
    int score;
}_person;

void print_score_stars(_person *target, int len)
{
    for(int i=0; i<len; i++)
    {
        printf("%-7s", target->name);
        for(int j=0, s=target->score/5; j<s; j++)
            printf("*");
        printf("\n");
        target++;
    }
}

int main(void)
{
    _person person[3];
    for(int i=0; i<3; i++)
        scanf("%s %d", person[i].name, &person[i].score);
    print_score_stars(person, 3);
}