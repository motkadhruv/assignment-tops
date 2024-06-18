//Q13.calculate the Factorial of a Given Number using while loop


#include <stdio.h>
int main() 
{
    int num;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        while (num > 0) {
            factorial *= num;
            --num;
        }
        printf("Factorial = %d", factorial);
    }

    return 0;
}

