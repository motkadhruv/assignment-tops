//Q10.WAP to perform Palindrome number using for loop and function

#include <stdio.h>
int isPalindrome(int num) 
{
    int originalNum = num;
    int reversedNum = 0;

     for (; num != 0; num /= 10) 
	{
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }

    
    return originalNum == reversedNum;
}

int main() 
{
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    
     if (isPalindrome(num)) 
	{
        printf("%d is a palindrome.\n", num);
    } 
	 else  
	{
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}


