// Write a function to reverse a string.

#include<stdio.h>

void reverse_string(char str_arr1[]);

int main ()
{
    char str_arr[100]; // declaration of char array
    int i; // integer variables declaration 
    
    printf("\nEnter a string: ");
    fgets(str_arr,100,stdin);

    reverse_string(str_arr); // calling reverse_string() function
    
    return 0;
}

void reverse_string(char str_arr1[])
{
    char str_arr2[100], temp; // declaration of char array and char variable
    int i,j,k=0; // integer variables declaration
    
    for (j = 0; str_arr1[j]; j++); // For loop for counting Size of String
    
    //printf("\n J= %d",j);

    printf("\nReverse String : ");  
    for (i=(j-2); i >= 0; i--) // For loop for Reverse String  
    {
        str_arr2[k]=str_arr1[i];
        k++;
    }
    str_arr2[k]='\0';
    printf("%s",str_arr2);
    printf("\n ");
}