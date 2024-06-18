//Q9. Write a program make a summation of given number (E.g., 1523 Ans: -11)


#include <stdio.h>
int main()
 {
    int number,remainder,sum;
    printf("Enter a number: ");
    scanf("%d", &number);

      while (number!=0)
	{
		
		
		remainder = number % 10;
		sum += remainder;
		number /=10;
    }

    printf("Sum of number: %d\n", sum);

    return 0;
}

