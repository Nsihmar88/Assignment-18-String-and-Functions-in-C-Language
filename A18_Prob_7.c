// Write a function to check whether a given string is palindrome or not.

#include<stdio.h>

int palindrome(char Str_arr[]);

int main ()
{
    char Str_arr[1000]; // declaration of char array
     
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
 
    if(palindrome(Str_arr))  // calling palindrome() function
        printf("\nString is palindrome.\n\n");  
    else  
        printf("\nString is not palindrome.\n\n"); 

    return 0;
}

int palindrome(char Str_arr[1000])
{
    int i=0,j,n=0; // integer variables declaration

    for (j = 0; Str_arr[j]; j++);
    j=j-1;
    
    for(i=0;i<j/2;i++)  
    {
    	if(Str_arr[i]==Str_arr[j-i-1])
    	n++;
 	}
    
    if(i==n)
        return(1);
    else
        return(0);
}