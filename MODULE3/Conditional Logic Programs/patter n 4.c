//*****
//****
//***
//**
//*


#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
//			if(j<=6-i)
			printf("*");
			
//			else
//			printf(" ");
			
		}
		printf("\n");
	}
	
	return 0;
}


//db
//i=1 1<=5 t j=1 1<=5 ,*, j++ j=2 2<=5 ,*, j++ j=3 3<=5 ,*, j++ j=4 4<=5 ,*, j++ j=5 5<=5 ,*, j++ j=6 6<=5 f
//i=2 2<=5 t j=1 1<=4 ,*, j++ j=2 2<=4 ,*, j++ j=3 3<=4 ,*, j++ j=4 4<=4 ,*, j++ j=5 5<=4 f
//i=3 3<=5 t j=1 1<=3 ,*, j++ j=2 2<=3 ,*, j++ j=3 3<=3 ,*, j++ j=4 4<=3 f
//i=4 4<=5 t j=1 1<=2 ,*, j++ j=2 2<=2 ,*, j++ j=3 3<=2 f
//i=5 5<=5 t j=1 1<=1 ,*, j++ j=2 2<=1 f
