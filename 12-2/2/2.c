
#include<stdio.h>

typedef struct _person
{
    char name[7];
    int score;
}_person;

int main(void)
{
    _person person[3];
    for(int i=0; i<3; i++)
        scanf("%s %d", person[i].name, &person[i].score);
    for(int i=0; i<3; i++)
    {
        printf("%-7s", person[i].name);
        for(int j=0, s=person[i].score/5; j<s; j++)
            printf("*");
        printf("\n");
    }   
}