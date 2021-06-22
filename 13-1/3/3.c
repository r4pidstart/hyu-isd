
#include<stdio.h>

void printstring(const char* s)
{
    printf("%s\n", s);
}

int main(void)
{
    char* start[3];
    start[0]="One", start[1]="Two", start[2]="Three";

    void (*fp)(const char*)=printstring;
    for(int i=0; i<3; i++)
        fp(start[i]);
}