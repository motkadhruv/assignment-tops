//Q5. WAP to print factorial of given number


#include <stdio.h>
int main() 
{
    int num,factorial = 1;


    printf("Enter a number integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Print factorial
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}

