//Q6. WAP to print Fibonacci series up to given numbers


#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter the number");
    scanf("%d", &n);

    printf("Fibonacci Series %d\n", n);
    printf("%d, %d, ", first, second);
    for (int i = 3; i <= n; ++i) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }
    printf("\n");

    return 0;
}

