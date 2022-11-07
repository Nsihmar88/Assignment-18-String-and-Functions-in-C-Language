// Write a function to calculate length of the string.

#include<stdio.h>

int String_length (char arr[]);
int main ()
{
    char Str_arr[1000];    
    
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
   
    printf("\nLength of string is: %d \n ",String_length(Str_arr));
    return 0;
}

int String_length (char arr[1000])
{
    int i;
    for (i = 0; arr[i]; i++);
    return (i-1);
}