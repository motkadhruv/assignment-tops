//Q4. WAP to print table up to given numbers


#include <stdio.h>
int main() 
{
    int number, i;
    printf("Enter the number");
    scanf("%d", &number);
    for (i = 1; i <=10; i++) {
    	
//        printf("Multiplication table for %d:\n", i);
//        for (j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", number, i, number * i);
//        }
    
    }


    return 0;
}

