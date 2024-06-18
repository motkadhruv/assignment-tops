//Q9. Write a program in C to find the maximum number of characters in a string.


#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256
void findMaxChar(char *str) 
{
    int count[MAX_CHARS] = {0};
    int max = 0; 
    char result;

    for (int i = 0; str[i] != '\0'; i++) 
	{
        count[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < MAX_CHARS; i++)  
	{
         if (count[i] > max) 
		{
            max = count[i];
            result = (char)i;
        }
    }

    printf("The maximum occurring character is '%c' with a frequency of %d.\n", result, max);
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    findMaxChar(str);

    return 0;
}

