//Q5. Write a program in C to compare two strings without using string library functions


#include <stdio.h>
int compareStrings(char *str1, char *str2) 
{
    while (*str1 && *str2 && (*str1 == *str2)) 
	{
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() 
{
    char str1[100], str2[100];
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    int result = compareStrings(str1, str2);
    
    if (result == 0)
	{
	
        printf("The strings are equal.\n");\
    }    
     else if (result < 0)
     {
	 
        printf("The first string is less than the second string.\n");
      }  
       else
       {
	   
         printf("The first string is greater than the second string.\n");
        }
    

    return 0;
}

