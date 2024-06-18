//Q8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)


#include <stdio.h>
int main() 
{
    int number, maxnumber = 0,N;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        N = number % 10;
        if (N > maxnumber) {
            maxnumber = N;
        }
        number /= 10;
    }


    printf("Max number is: %d\n", maxnumber);

    return 0;
}

