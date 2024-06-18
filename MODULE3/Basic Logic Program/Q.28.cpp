//Q28.Convert years into days and months


#include <stdio.h>
int main() {
    int years, totalDays, months,days;
    printf("Enter the number of years: ");
    scanf("%d", &years);
    totalDays = years * 365;
    printf("totalDays: %d\n",totalDays);


       for (int i = 1; i <= years; i++) {
            totalDays++;
   }

    months = totalDays / 30;
    days = totalDays % 30;
    printf("%d years is %d months and %d days\n", years, months,days);

    return 0;
}


