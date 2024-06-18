//Q1. Write a program in C to find the length of a string without using library functions.

#include <stdio.h>
int stringLength(char *str) 
{
    int length = 0;
    
    while (str[length] != '\0') 
	{
        length++;
    }
    
    return length;
}

int main() 
{
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = stringLength(str);
    if (str[length - 1] == '\n') 
	{
        str[length - 1] = '\0';
        length--; 
    }
    

    printf("The length of the string is: %d\n", length);
    
    return 0;
}

