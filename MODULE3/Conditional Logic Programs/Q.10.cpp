//Q10.WAP to check whether a number is negative, positive or zero.


#include<stdio.h>
int main()
{
	
	int number;
	printf("enter the number");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("number is a positive");
	}
	else if(number<0)
	{
		printf("number is a negative");
	}
	else
	{
		printf("number is a zero");
	}	
	
	return 0;
}
