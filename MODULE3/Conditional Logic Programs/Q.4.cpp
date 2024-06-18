//Q4. WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main()
{ 
    int no1,no2,ans;
    char choice;
    printf("+ for addition\t- for subtrcation\t* for multipication\t/ for divition");
    printf("\n enter your choice");
    scanf("%c", &choice);
//    if(choice == '+'||choice =='-'||choice =='*'|| choice =='/')
	{
    	printf("enter two number:");
    	scanf("%d %d",&no1,&no2);
	}
	switch(choice)

    {
    	case '+':
    	  ans=no1+no2;
    	  printf("addition is %d",ans);
    	  break;
    	case '-':
    	  ans=no1-no2;
    	  printf("subtrcation is %d",ans);
    	  break;
    	case '*':
    	  ans=no1*no2;
    	  printf("multipication is %d",ans);
    	  break;
    	case '/':
    	  ans=no1/no2;
    	  printf("divition is %d",ans);
    	  break;
    
    	  
    	  default:
    	  	printf("plese enter valid operation");


}
	
	
	return 0;
}
