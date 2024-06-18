//Q10.find the area of a rectangular prism formula : A=2(wl+hl+hw)


#include<stdio.h>
int main()
{
	 int length, width,hight,area,d;
	printf("enter the length area of a rectangular prism");
	scanf("%d",&length);
	printf("enter the width area of a rectangular prism");
	scanf("%d",&width);
	printf("enter the hight area of a rectangular prism");
	scanf("%d",&hight);
	d=length*width + hight*length + hight*width;
	printf("%d",d);
	area=2*d;
	printf("the area of a rectangular prism is:%d\n",area);
	
	return 0;
}

