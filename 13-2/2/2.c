
#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr_s[10][21]={};
    int count=0;
    while(1)
    {
        if(count > 9)
            break;
        char tmp[21];
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s", tmp);
        if(!strcmp(tmp, "end"))
            break;
        int flag=0;
        for(int i=0; i<count; i++)
            if(!strcmp(tmp, arr_s[i]))
            {
                printf("This word already exists. Please enter another word.\n");
                flag++;
            }
        if(flag==0)
            strcpy(arr_s[count++], tmp);
    }
    printf("%d words in the list: ", count);
    for(int i=0; i<count; i++)
        printf("%s ", arr_s[i]);
    char target[21];
    while(1)
    {
        printf("\nEnter a word to search (Enter 'end' to quit): ");
        int flag=0;
        scanf("%s", target);
        if(!strcmp(target, "end"))
            break;
        for(int i=0; i<count; i++)
            if(!strcmp(arr_s[i], target))
            {
                printf("This word is in the list.");
                flag++;
            }
        if(flag==0)
            printf("This word is NOT in the list.");
    }
}