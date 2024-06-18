//Q14.Accept 5 numbers from user and find those numbers factorials


#include <stdio.h>
int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numbers[5];
    int i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nFactorials of the entered numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Factorial of %d: %d\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}

