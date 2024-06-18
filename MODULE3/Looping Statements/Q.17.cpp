//Q17.Calculate 5 numbers from user and calculate number of even and odd using of while loop



#include <stdio.h>
int main() 
{
    int count = 1,evennumber = 0, oddnumber = 0,number;
    printf("Enter 5 numbers, one at a time:\n");

    while (count <= 5) {
        printf("Enter number %d: ", count);
        scanf("%d", &number);
        
        if (number % 2 == 0)
            evennumber++;
        else
            oddnumber++;

        count++;
    }

    printf("\nNumber of even numbers: %d\n", evennumber);
    printf("Number of odd numbers: %d\n", oddnumber);

    return 0;
}



