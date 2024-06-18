//Q21.Accept 2 numbers from user and swap 2 numbers with using 3rd variableand without using 3rd variable



//swap the number
//num1=50 , num2=100 num1=100 num2=50
//#include<stdio.h>
//int main()
//{
//	// swap with using 3rd variable
//	int num1,num2,temp;
//	printf("enter two values");
//	scanf("%d %d", &num1,&num2);
//	printf("before swap num1 is %d and num2 is %d",num1,num2);
//	temp=num1;
//	num1=num2;
//	num2=temp;
//	printf("\n after swap num1 is %d and num2 is %d",num1,num2);					
//	return 0;
//}

#include <stdio.h>

int main() {
    int num1, num2;

    // swap without using 3rd variable
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping:\nFirst number: %d\nSecond number: %d\n", num1, num2);

    return 0;
}

