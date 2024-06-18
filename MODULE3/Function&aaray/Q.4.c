//Q4. WAP to find factorial using recursion

#include <stdio.h>
 factorial(int n) 
{
    if (n == 0 || n == 1) 
	{
        return 1;
    }

    return n * factorial(n - 1);
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        printf("Factorial of a negative number doesn't exist.\n");
    } 
	else 
	{
    
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }

    return 0;
}

