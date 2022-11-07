// Write a function to count words in a given string.

#include<stdio.h>

int words_count(char Str_arr[]);

int main ()
{
    char Str_arr[1000]; // declaration of char array
     
    printf("\nEnter a string: ");
    fgets(Str_arr,1000,stdin);
 
    printf("\nWords in String are: %d\n\n",words_count(Str_arr)); // calling words_count() function

    return 0;
}

int words_count(char Str_arr[])
{
    int i=0,j,strlen=0,wordscount=0,flag=0; // integer variables declaration

    for (j = 0; Str_arr[j]; j++); // Calculating string length.
    
    strlen=j-2;
    
    for(i=0;i<strlen;i++)  
    {
        if (((int) Str_arr[i] < 65 || (int) Str_arr[i] > 90) && ((int) Str_arr[i] < 97 || (int) Str_arr[i] > 122))
        {
            flag = 0;
        }
        else if (flag == 0)
        {
            flag = 1;
            ++wordscount;
        }
 	}
    return(wordscount);
}