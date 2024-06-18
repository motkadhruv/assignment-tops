//Q26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include <stdio.h>
int main() 
{
    int n, sum = 0, Sum1 = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        Sum1 += i; 
        sum += Sum1; 
    }

    printf("Sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+%d) = %d\n", n, sum);

    return 0;
}

