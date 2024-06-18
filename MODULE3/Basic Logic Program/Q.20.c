//Q20.Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.


#include <stdio.h>
int main() 
{
    // Declare variables
    float monthlySalary,Premium, loan, remainingSalary;

    printf("Enter your monthly salary: $");
    scanf("%f", &monthlySalary);

    Premium = 0.1 * monthlySalary;

    loan = 0.1 * monthlySalary;

    remainingSalary = monthlySalary - Premium - loan;


    printf("Insurance premium: $%.2f\n", Premium);
    printf("Loan installment: $%.2f\n", loan);
    printf("Remaining salary after deductions: $%.2f\n", remainingSalary);

    return 0;
}



