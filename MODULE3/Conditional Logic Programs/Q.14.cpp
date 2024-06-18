//Q14.WAP to find the largest of three numbers.


#include <stdio.h>
int main() 
{
    int num1, num2, num3, max;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 >= num2 && num1 >= num3)
        max = num1;
    else if (num2 >= num1 && num2 >= num3)
        max = num2;
    else
        max = num3;
    
    printf("Largest number is: %d\n", max);
    
    return 0;
}

