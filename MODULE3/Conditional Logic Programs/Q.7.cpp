//Q7. Accept marks from user and check pass or fail




#include<stdio.h>
int main()
{
	
	int mark;
	printf("enter the marks");
	scanf("%d",&mark);
	
	if(mark >35)
	{
		printf("%d is a pass \n",mark);
	}
	else 
	{
		printf("%d is a fail \n",mark);
	}
	
	return 0;
}
