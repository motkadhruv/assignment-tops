//Q2. Write a program in C to separate individual characters from a string.

#include <stdio.h>
void separateCharacters(char *str) 
{
    int i = 0;
    
    while (str[i] != '\0') 
	{
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
}

int main() 
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Individual characters from the string:\n");
    separateCharacters(str);
    
    return 0;
}

