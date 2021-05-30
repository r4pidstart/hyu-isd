
#include<stdio.h>
#include<string.h>

int check_word(char arr_s[][21], char *target, char len)
{
    for(int i=0; i<len; i++)
        if(!strcmp(target, arr_s[i]))
            return 1;
    return 0;
}

int get_word(char arr_s[][21], char index)
{
    char tmp[21];
    printf("Enter a word (Enter 'end' to quit): ");
    scanf("%s", tmp);

    while(check_word(arr_s, tmp, index))
    {
        printf("This word already exists. Please enter another word.\n");
        scanf("%s", tmp);
    }

    if(strcmp("end", tmp)==0)
        return 1;

    strcpy(arr_s[index], tmp);
    return 0;
}

void print_arr_s(char arr_s[][21], int len)
{
    printf("%d words in the list:\n", len);
    for(int i=0; i<len; i++)
        printf("%s ", arr_s[i]);
    printf("\n");
}

int find_word(char arr_s[][21], int len) 
{
    char target[21];
    printf("Enter a word to search (Enter 'end' to quit): ");
    scanf("%s", target);
    if(strcmp(target, "end")==0)
        return 1;
    
    if(check_word(arr_s, target, len))
        printf("This word is in the list.\n");
    else
        printf("This word is NOT in the list.\n");
    return 0;
}

int main(void)
{
    char arr_s[10][21]={};
    int count;
    for(count=0; count<10; count++)
        if(get_word(arr_s, count))
            break;
    print_arr_s(arr_s, count);
    while(!find_word(arr_s, count));
}