//Q12.Accept number of students from user. I need to give 5 apples to eachstudent. How many apples are required?

#include<stdio.h>
int main()
{
	 int students,a;
	printf("enter the nuber of students");
	scanf("%d",&students);
    a=students*5;
	printf("apples are required:%d\n",a);
	
	return 0;
}
