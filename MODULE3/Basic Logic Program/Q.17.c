//Q17.Calculate person’s insurance premium based on salary



#include <stdio.h>
int main() 
{

    float salary, premium, insurancePremium;
    printf("Enter your annual salary: $");
    scanf("%f", &salary);

    printf("Enter the premium: ");
    scanf("%f", &premium);
    insurancePremium = (salary * premium) / 100;

    printf("Your insurance premium is: $%0.2f\n", insurancePremium);

    return 0;
}

