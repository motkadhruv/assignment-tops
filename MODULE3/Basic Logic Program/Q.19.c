//Q19.Calculate compound interest

#include <stdio.h>
#include <math.h>
int main() 
{

    float p,r,time,c;
    printf("Enter the amount:");
    scanf("%f", &p);

    printf("Enter the interest: ");
    scanf("%f", &r);

    printf("Enter the time period: ");
    scanf("%f", &time);

    c = p * (pow(1 + r / 100, time)) - p;
    printf("%.2f : $%.2f\n",time,c);

    return 0;
}

