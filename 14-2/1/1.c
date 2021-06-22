
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char name[7];
    int score;
}Person;

void print_score_stars(Person* persons, int len)
{
    for(int i=0; i<len; i++)
    {
        printf("%-7s", (persons+i)->name);
        for(int j=0; j<(persons+i)->score/5; j++)
            printf("*");
        printf("\n");
    }
}

int main(void)
{
    Person* arr=malloc(sizeof(Person));
    char tmp1[7];
    int tmp2, arr_size=0;

    scanf("%s%d", tmp1, &tmp2);
    while(strcmp(tmp1, "END")!=0 && tmp2!=0)
    {
        Person* tmp=realloc(arr, sizeof(Person)*(++arr_size));
        arr=tmp;
        strcpy(arr[arr_size-1].name, tmp1);
        arr[arr_size-1].score=tmp2;
        scanf("%s%d", tmp1, &tmp2);
    }
    print_score_stars(arr, arr_size);
    free(arr);
}