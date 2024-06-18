//Q30.WAP to convert years into days and days into years


#include <stdio.h>

int main() {
    int choice,years, days;
    

    printf("Choose conversion:\n");
    printf("1. Years to Days\n");
    printf("2. Days to Years\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter number of years: ");
        scanf("%d", &years);
        days = years * 365;
        printf("%d years is equal to %d days.\n", years, days);
        
        
    } 
	  else if (choice == 2) 
	{
        printf("Enter number of days: ");
        scanf("%d", &days);
        years = days / 365;
        printf("%d days is equal to %d years.\n", days, years);
    } 
	  else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}


