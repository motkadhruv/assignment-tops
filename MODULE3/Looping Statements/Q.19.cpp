//19. Patterns 1
//1
//10
//101
//1010
//10101



#include <stdio.h>
int main()
{
    int i,j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    

//Patterns 2   
//1 
//2 3 
//4 5 6 
//7 8 9 10 
//11 12 13 14 15 


    int a = 1,c,d;

    for (c = 1; c <=5; c++) {
        for (d = 1; d <= c; d++) {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

//Patterns 3
//A
//B C
//D E F
//G H I J
//K L M N O

    char add= 'A';
    int rows = 5;
    int g,b;

    for (g = 1; g <= rows; g++) {
        for (b = 1; b <= g; b++) {
            printf("%c ",add);
            add++;
        }
        printf("\n");
    }
    


//Patterns 4
//A
//A B
//A B C
//A C B D
//A B C D E

   
    int rowsa=5;
    int k, t;
    char sub = 'A';

    for (k = 1; k <= rowsa; k++) {
        for (t = 1; t <= k; t++) {
            printf("%c ", sub++);
        }
        printf("\n");
    }
    
  

//Patterns 5  
    
//             *
//           * * * 
//	       * * * * * 
//		 * * * * * * *
//	   * * * * * * * * *	  
	 
	int x,y;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=9;y++)
		{
			if(y>=6-x&&y<=4+x)
			printf("*");
			
			else
			printf(" ");
			
		}
		printf("\n");
	}
    
    
	
	
//Patterns 6
    
//    *
//    * *
//    * * *
//    * * * *
//    * * * * *
//    * * * *
//    * * *
//    * *
//    *
//   

	int u,r,f=0;
	for(u=1;u<=9;u++)
	{
		u<6?f++:f--;
		for(r=1;r<=5;r++)
		{
			if(r<=f)
			{
			
			printf("*");
			
		}
			
			else
			printf(" ");
			
		}
		printf("\n");
	} 
    
    
   
   
//Patterns 7  
//    1  2  3  4  5  6  7  8  9  10
//    36 37 38 39 40 41 42 43 44 11
//    35 64 65 66 67 68 69 70 45 12
//    34 63 84 85 86 87 88 71 46 13
//    33 62 83 96 97 98 89 72 47 14
//    32 61 82 95 100 99 90 73 48 15
//    31 60 81 94 93 92 91 74 49 16
//    30 59 80 79 78 77 76 75 50 17
//    29 58 57 56 55 54 53 52 51 18
//    28 27 26 25 24 23 22 21 20 19


      return 0;
}




//debug 
//Patterns 1
//i=1 1<=5 true j=1 1<=1 ,1, j++ j=2  2<=1 flase
//i=2 2<=5 true j=1 1<=2 ,1, j++ j=2  2<=2 ,0, j++ j=3 3<=2 flase
//i=3 3<=5 true j=1 1<=3 ,1, j++ j=2  2<=3 ,0, j++ j=3 3<=3 ,0, j++ j=4 4<=3 flase
//i=4 4<=5 true j=1 1<=4 ,1, j++ j=2  2<=4 ,0, j++ j=3 3<=4 ,1, j++ j=4 4<=4 ,0, j++ j=5 5<=4 flase
//i=5 5<=5 true j=1 1<=5 ,1, j++ j=2  2<=5 ,0, j++ j=3 3<=5 ,1, j++ j=4 4<=5 ,0, j++ j=5 5<=5 ,1, j++ j=6 6<=5 flase




//debug 
//Patterns 2
//c=1 1<=5 true d=1 1<=1 ,1, d++ d=2  2<=1 flase
//c=2 2<=5 true d=1 1<=2 ,2, d++ d=2  2<=2 ,3, d++ d=3 3<=2 flase
//c=3 3<=5 true d=1 1<=3 ,4, d++ d=2  2<=3 ,5, d++ d=3 3<=3 ,6, d++ d=4 4<=3 flase
//c=4 4<=5 true d=1 1<=4 ,7, d++ d=2  2<=4 ,8, d++ d=3 3<=4 ,9, d++ d=4 4<=4 ,10, d++ d=5 5<=4 flase
//c=5 5<=5 true d=1 1<=5 ,11, d++ d=2  2<=5 ,12, d++ d=3 3<=5 ,13, d++ d=4 4<=5 ,14, d++ d=5 5<=5 ,15, d++ d=6 6<=5 flase




//debug 
//Patterns 3
//g=1 1<=5 true b=1 1<=1 ,A, b++ b=2  2<=1 flase
//g=2 2<=5 true b=1 1<=2 ,B, b++ b=2  2<=2 ,C, b++ b=3 3<=2 flase
//g=3 3<=5 true b=1 1<=3 ,D, b++ b=2  2<=3 ,E, b++ b=3 3<=3 ,F, b++ b=4 4<=3 flase
//g=4 4<=5 true b=1 1<=4 ,G, b++ b=2  2<=4 ,H, b++ b=3 3<=4 ,I, b++ b=4 4<=4 ,J, b++ b=5 5<=4 flase
//g=5 5<=5 true b=1 1<=5 ,K, b++ b=2  2<=5 ,L, b++ b=3 3<=5 ,M, b++ b=4 4<=5 ,N, b++ b=5 5<=5 ,O, b++ b=6 6<=5 flase

  
//debug 
//Patterns 4
//k=1 1<=5 true t=1 1<=1 ,A, t++ t=2  2<=1 flase
//k=2 2<=5 true t=1 1<=2 ,A, t++ t=2  2<=2 ,B, t++ t=3 3<=2 flase
//k=3 3<=5 true t=1 1<=3 ,A, t++ t=2  2<=3 ,B, t++ t=3 3<=3 ,C, t++ t=4 4<=3 flase
//k=4 4<=5 true t=1 1<=4 ,A, t++ t=2  2<=4 ,B, t++ t=3 3<=4 ,C, t++ t=4 4<=4 ,D, t++ t=5 5<=4 flase
//k=5 5<=5 true t=1 1<=5 ,A, t++ t=2  2<=5 ,B, t++ t=3 3<=5 ,C, t++ t=4 4<=5 ,D, t++ t=5 5<=5 ,E, t++ t=6 6<=5 flase


//debug 
//Patterns 5
//i=1 1<=5 t j=1 1<=9 t j=1 1>=5 $$ 1<=5 ,_, j++ j=2 2>=5 $$ 2<=5 ,_, j++ j=3 3>=5 $$ 3<=5 ,_, j++ j=4 4>=5 $$ 4<=5 ,_, j++ j=5 5>=5 $$ 5<=5 ,*, j++ j=6 6>=5 $$ 6<=5 ,_, j++ j=7 7>=5 $$ 7<=5 ,_, j++ j=8 8>=5 $$ 8<=5 ,_, j++ j=9 9>=5 $$ 9<=5 ,_, j++ 10 10<=9 f
//i=2 2<=5 t j=1 1<=9 t j=1 1>=4 $$ 1<=6 ,_, j++ j=2 2>=4 $$ 2<=6 ,_, j++ j=3 3>=4 $$ 3<=6 ,_, j++ j=4 4>=4 $$ 4<=6 ,*, j++ j=5 5>=4 $$ 5<=6 ,*, j++ j=6 6>=4 $$ 6<=6 ,*, j++ j=7 7>=4 $$ 7<=6 ,_, j++ j=8 8>=4 $$ 8<=6 ,_, j++ j=9 9>=4 $$ 9<=6 ,_, j++ 10 10<=9 f
//i=3 3<=5 t j=1 1<=9 t j=1 1>=3 $$ 1<=7 ,_, j++ j=2 2>=3 $$ 2<=7 ,_, j++ j=3 3>=3 $$ 3<=7 ,*, j++ j=4 4>=3 $$ 4<=7 ,*, j++ j=5 5>=3 $$ 5<=7 ,*, j++ j=6 6>=3 $$ 6<=7 ,*, j++ j=7 7>=3 $$ 7<=7 ,*, j++ j=8 8>=3 $$ 8<=7 ,_, j++ j=9 9>=3 $$ 9<=7 ,_, j++ 10 10<=9 f
//i=4 4<=5 t j=1 1<=9 t j=1 1>=2 $$ 1<=8 ,_, j++ j=2 2>=2 $$ 2<=8 ,*, j++ j=3 3>=2 $$ 3<=8 ,*, j++ j=4 4>=2 $$ 4<=8 ,*, j++ j=5 5>=2 $$ 5<=8 ,*, j++ j=6 6>=2 $$ 6<=8 ,*, j++ j=7 7>=2 $$ 7<=8 ,*, j++ j=8 8>=2 $$ 8<=8 ,*, j++ j=9 9>=2 $$ 9<=8 ,_, j++ 10 10<=9 f
//i=5 5<=5 t j=1 1<=9 t j=1 1>=1 $$ 1<=9 ,*, j++ j=2 2>=1 $$ 2<=9 ,*, j++ j=3 3>=1 $$ 3<=9 ,*, j++ j=4 4>=1 $$ 4<=9 ,*, j++ j=5 5>=1 $$ 5<=9 ,*, j++ j=6 6>=1 $$ 6<=9 ,*, j++ j=7 7>=1 $$ 7<=9 ,*, j++ j=8 8>=1 $$ 8<=9 ,*, j++ j=9 9>=1 $$ 9<=9 ,*, j++ 10 10<=9







