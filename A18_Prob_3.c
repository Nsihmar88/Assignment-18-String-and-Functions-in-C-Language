// Write a function to compare two strings.

#include <stdio.h>

int compare(char[],char[]);

int main()  
{  
    char str1[1000]; // declaration of char array  
    char str2[1000]; // declaration of char array  
    printf("\nEnter the first string : ");  
    fgets(str1,1000,stdin);  

    printf("Enter the second string : ");  
    fgets(str2,1000,stdin);  
    
    int c= compare(str1,str2); // calling compare() function  
    
    if(c==0)  
        printf("\nStrings are same \n\n");  
    else  
        printf("\nStrings are not same\n\n");  
  
    return 0;  
}  
  
// Comparing both the strings.  
int compare(char a[],char b[])  
{  
    int flag=0, i=0;  // integer variables declaration  
    while(a[i]!='\0' && b[i]!='\0')  // while loop  
    {  
       if(a[i] != b[i])  
       {  
           flag = 1;  
           break;  
       }  
       i++;  
    }

    if(flag==0)  
        return 0;  
    else  
        return 1;  
}  