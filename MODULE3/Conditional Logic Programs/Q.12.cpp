//Q12.WAP to find maximum number among 3 numbers using ternary operator


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
    printf("Maximum number is: %d\n", max);
    
    return 0;
}


