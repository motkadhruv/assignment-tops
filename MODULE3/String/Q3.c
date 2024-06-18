//Q3. Write a program in C to print individual characters of a string in reverse order


#include <stdio.h>
void printReverse(char *str) 
{
    int length = 0;

    while (str[length] != '\0') 
	{
        length++;
    }

    for (int i = length - 1; i >= 0; i--) 
	{
        printf("%c ", str[i]);
    }
    printf("\n");
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Individual characters of the string in reverse order:\n");
    printReverse(str);

    return 0;
}

