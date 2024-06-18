//Q23. C Program to Reverse a Number Using FOR Loop


#include <stdio.h>
int main() 
{
    int num, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}

