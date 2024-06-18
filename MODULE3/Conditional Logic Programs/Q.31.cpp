//Q31. Write a program in C to read any Month Number in integer and display the number of days for this month.


#include <stdio.h>
int main()
 {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) 
	{
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    } 
	else 
	{
    
        int days;
        switch (month) {
            case 2:
                days = 28; // February (considering non-leap year)
                break;
            case 4:
            	days = 30; // April
                break;
            case 6:
            	days = 30; // June
                break;
            case 9:
            	days = 30; // September
                break;
            case 11:
                days = 30; // November
                break;
            default:
                days = 31; // January, March, May, July, August, October, December
                break;
        }
        printf("Number of days in month %d is: %d\n", month, days);
    }

    return 1;

}

