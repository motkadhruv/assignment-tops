//Q7. Write a program in C to copy one string to another string.


#include <stdio.h>
void stringCopy(char *source, char *destination) 
{
    while (*source) 
	{
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; 
}

int main() 
{
    char source[100], destination[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", source);
    
    stringCopy(source, destination);
    
    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}

