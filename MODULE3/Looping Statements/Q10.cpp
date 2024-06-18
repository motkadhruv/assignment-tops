//Q10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include <stdio.h>
int main()
{
    int number, firstnumber, lastnumber, sum;
    printf("Enter a number: ");
    scanf("%d", &number);
    lastnumber = number % 10;
    if (number < 0) {
        number = -number;
    }
    firstnumber = number;
    while (firstnumber >= 10) {
        firstnumber /= 10;
    }
    sum = firstnumber + lastnumber;
    if (number < 0) {
        sum = -sum;
    }
    printf("Sum of first and last number: %d\n", sum);

    return 0;
}

