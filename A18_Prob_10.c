// Write a function to find the repeated character in a given string.

#include<stdio.h>

void repeated(char str[]);
int main()
{
    char str[200];

    printf("\n\nEnter Any string: ");
    fgets(str,200,stdin);
    
    fflush(stdin);
    repeated(str);
    
    return 0;
}
void repeated(char str[])
{
    char frequency[150]={0};
    int i,count=0;
    for(i=0;str[i];i++)
    {
        frequency[str[i]]++; 
    }

    for(i=0;i<150;i++)
    {
        if(frequency[i] > 1)
        {
            printf("%c = %d\n",i,frequency[i]);
            count++;
        }
    }
    
    if(count == 0)
    {
        printf("Not a Repeated Character");
    }
}