//Q36.Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//for next 100 units Rs. 1.20/unit
//for next 250 units Rs. 1.50/unit
//an additional surcharge of 20% is added to the bill


#include <stdio.h>
int main() 
{ 
    int bill;
    float units,surcharge = 0;
    printf("Enter the total units:");
    scanf("%f", &units);
    
    if (units <= 50) 
	{
        bill = units * 0.50;
    } 
	else if (units <= 150) 
	{
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } 
	else if (units <= 250) 
	{
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } 
	else 
	{
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Calculate surcharge
    surcharge = bill * 0.20;
    bill += surcharge;
    
	printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}

