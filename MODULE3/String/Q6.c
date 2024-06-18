//Q6. Write a program in C to count the total number of alphabets, digits and special characters in a string.


#include <stdio.h>
#include <ctype.h>
int main() 
{
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i]))
        {
		
            alphabets++;
        }   
        else if (isdigit(str[i]))
        {
        	
            digits++;
        }
        else
        {
		
            specialChars++;
        }
    }
    
    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);
    
    return 0;
}

