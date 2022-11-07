// Write a function to transform string into uppercase.

#include<stdio.h>

void uppercase(char Str_arr[]);

int main ()
{
    char Str_arr[1000];
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);

    uppercase(Str_arr); // calling uppercase() function

    return 0;
}

void uppercase(char Str_arr[1000])
{
    int i;

    for (i = 0; Str_arr[i]; i++)
    {
        if (Str_arr[i]>='a' && Str_arr[i]<='z')
        {
            Str_arr[i] = Str_arr[i] - 32;
        }                
    }
    printf("\nString in upper case: %s",Str_arr);
    printf("\n ");
}