//Q3. WAP to find reverse of string using recursion


#include <stdio.h>
#include <string.h>
void reverseString(char* str, int start, int end) 
{
	char temp;
    if (start >= end) 
	{
        return;
    }

    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    reverseString(str, start + 1, end - 1);
}

int main() 
{
    char str[100];
    int length;
    printf("Enter a string: ");
    gets(str); 
    length = strlen(str);

    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}

