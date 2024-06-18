//Q6. Find area of Triangle Formula : A = 1/2 × b × h


#include<stdio.h>
int main()
{
	int base, hight,area;
	printf("enter the base of triangle ");
	scanf("%d",&base);
	printf("enter the hight of triangle");
	scanf("%d",&hight);
	area=1/2*base*hight;
	printf("the area of triangle is:%d\n",area);

	
	return 0;
}
