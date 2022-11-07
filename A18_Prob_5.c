// Write a function to transform a string into lowercase.

#include<stdio.h>

void lowercase(char Str_arr[]);

int main ()
{
    char Str_arr[1000]; // declaration of char array
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);

    lowercase(Str_arr); // calling lowercase() function

    return 0;
}

void lowercase(char Str_arr[1000])
{
    int i; // integer variables declaration

    for (i = 0; Str_arr[i]; i++)
    {
        if (Str_arr[i]>='A' && Str_arr[i]<='Z')
        {
            Str_arr[i] = Str_arr[i] + 32;
        }                
    }
    printf("\nString in lower case: %s",Str_arr);
    printf("\n ");
}