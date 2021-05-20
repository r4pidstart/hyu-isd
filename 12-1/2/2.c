
#include<stdio.h>

typedef struct _name_age
{
    char name[10];
    int age;
}_name_age;

int main(void)
{
    _name_age name_age;
    scanf("%s %d", name_age.name, &name_age.age);
    printf("name: %s\nage: %d", name_age.name, name_age.age);
}