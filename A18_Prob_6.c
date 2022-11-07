// Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>

int Alphanumeric(char Str_arr[]);

int main ()
{
    char Str_arr[1000]; // declaration of char array
    int Alphanum; 
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);

    Alphanum = Alphanumeric(Str_arr); // calling Alphanumeric() function
    if(Alphanum==0)  
        printf("\nString is alphanumeric.\n\n");  
    else  
        printf("\nString is not alphanumeric.\n\n"); 

    return 0;
}

int Alphanumeric(char Str_arr[1000])
{
    int i, alphabets=0, number=0; // integer variables declaration

    for (i = 0; Str_arr[i]; i++)
    {
        if (Str_arr[i]>='A' && Str_arr[i]<='Z' || Str_arr[i]>='a' && Str_arr[i]<='z')
            alphabets++;
        else if (Str_arr[i]>='0' && Str_arr[i]<='9')
            number++;              
    }
    
    if(alphabets>=1 && number>=1)
        return(0);
    else
        return(1);
}