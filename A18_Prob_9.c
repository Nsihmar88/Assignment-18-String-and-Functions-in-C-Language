/*
    Write a function to reverse a string word wise. (For example if the given string is 
    “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
*/
#include <stdio.h>
void reverse_string_word_wise(char s[]);
int main()
{
    char str[100], option;
    int i;

    printf("\n\nDemo String = Mysirg Education Services\n\nEnter y to continue and n to exit: ");
    scanf("%c", &option);
    fflush(stdin);
    
    if (option == 'y' || option == 'Y')
    {
        printf("\nEnter your string : ");
        fgets(str, 100, stdin);
        for (i = 0; str[i]; i++);
        str[i-1] = ' ';

        reverse_string_word_wise(str);
        printf("\nWord Wise Reversed String: ");
        printf("%s\n\n", str);
    }
    else if (option == 'n' || option == 'N')
    {
        printf("\nProgram Ends.\n ");
    }
    else
    {
        printf("\nEntred wrong choise.\n\nProgram Ends.\n ");
    }    
    return 0;
}

void reverse_string_word_wise(char s[])
{
    int i, j, k, len = 0, strlen, temp;

    for (i = 0; s[i]; i++);
    strlen = i-1;

    for (i = 0; i < strlen; i++)
    {
        len = 0;
        
        for (j = i; s[j]; j++)
        {
            if (s[j] == 32 || s[j] == 0)
                break;
            len++;
        }
        j--;
        
        for (k = 0; k<(len/2); k++)
        {
            temp = s[i + k];
            s[i + k] = s[j - k];
            s[j - k] = temp;
        }
        i += len;       
    }

    for (i = 0; i < (strlen/2); i++)
    {
        temp = s[i];
        s[i] = s[strlen - i];
        s[strlen - i] = temp;
    }
}