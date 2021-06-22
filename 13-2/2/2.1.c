
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int check_word(char* s, char** arr)
{ 
    // 배열에 주어진 문자열이 있는지 확인하는 함수
    for(int i=0; i<10; i++)
    {
        if(strcmp(s, arr[i])==0)
            return 1;
    }
    return 0;
}

int get_word(char** arr, int *arrcnt)
{
    // 문자열을 받아와 배열에 넣는 함수
    if(*arrcnt>9) return 1;
    char* s=malloc(sizeof(char)*21);
    while(1)
    {
        printf("Enter a word:");
        scanf("%s", s);
        if(strcmp("end", s)==0)
            return 1;
        if(!check_word(s, arr))
            break;
        printf("This word already exists.\n");
    }
    arr[*arrcnt]=s;
    *arrcnt+=1;

    return 0;
}

void printarr(char** arr, int len)
{
    printf("%d words in the list\n", len);
    for(int i=0; i<len; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}

int search_word(char** arr)
{
    char s[21];
    while(1)
    {
        printf("enter a word to search: ");
        scanf("%s", s);
        if(strcmp(s, "end")==0)
            return 1;
        if(check_word(s, arr))
            printf("This word is in the list\n");
        else
            printf("This word is not in the list\n");
    }
    return 0;
}

int main(void)
{
    char** words=malloc(sizeof(char*)*10);
    for(int i=0; i<10; i++)
        words[i]=malloc(sizeof(char)*21);
    int arrcnt=0;
    while(!get_word(words, &arrcnt));

    printarr(words, arrcnt);

    while(!search_word(words));

    for(int i=0; i<10; i++)
        free(words[i]);
    free(words);

}