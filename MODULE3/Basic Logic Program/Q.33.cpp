//Q33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)




#include<stdio.h>
int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    printf("Powers of %d:\n", number);
    printf("%d^1 = %d\n", number, number);
    printf("%d^2 = %d\n", number, number * number);
    printf("%d^3 = %d\n", number, number * number * number);
    
    return 0;
}

