//Q27.Convert days into months

#include <stdio.h>

int main() 
{
    int days, months;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    months = days / 30;
    printf(" %d months", months);

    return 0;
}


