//Q22.Calculate compound interest (Compound Interest formula: 
//a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P



#include <stdio.h>
#include <math.h>
int main() 
{

    float p,r,time,Amount,CompoundInterest;
    printf("Enter the amount:");
    scanf("%f", &p);

    printf("Enter the interest: ");
    scanf("%f", &r);

    printf("Enter the time period: ");
    scanf("%f", &time);

     CompoundInterest = p * (pow(1 + r / 100, time)) - p;
    printf("%.2f : $%.2f\n",time, CompoundInterest);
    
//    CompoundInterest=Amount – P;
//    printf("%.2f:\n",CompoundInterest);

    return 0;
}
