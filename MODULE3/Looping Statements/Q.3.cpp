//Q3. WAP to take 10 no. Input from user find out below values 
// a. How many Even numbers are there
// b. How many odd numbers are there
// c. Sum of even numbers
// d. Sum of odd numbers


#include <stdio.h>
int main()
{
    int number,even = 0, odd = 0,even_sum = 0, odd_sum = 0,i;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Enter number %d: ",i);
        scanf("%d", &number);
        printf("%d\n",number);
        
        if (number% 2 == 0) 
	    {
            even++;
            even_sum += number;
        } 
		else 
		{
            odd++;
            odd_sum += number;
        }
    }
//    for (i = 0; i < 10; i++) {
        
//    }
//    printf("\nResults:\n");
    printf("a. Number of even numbers: %d\n", even);
    printf("b. Number of odd numbers: %d\n", odd);
    printf("c. Sum of even numbers: %d\n", even_sum);
    printf("d. Sum of odd numbers: %d\n", odd_sum);

    return 0;
}

    	
    	


