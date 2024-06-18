//Q13.WAP to find minimum number among 3 numbers using ternary operator


#include <stdio.h>
int main()
 {
    int num1, num2, num3, minimum;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 <= num2 && num1 <= num3)
        minimum = num1;
    else if (num2 <= num1 && num2 <= num3)
        minimum = num2;
    else
        minimum = num3;
    printf("Minimum number is: %d\n", minimum);
    
    return 0;
}


