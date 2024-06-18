//Q19.Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
//    Unit                                 Charge/unit
//    upto 350                                @1.20
//    350 and above but less than 600         @1.50
//    600 and above but less than 800         @1.80
//    800 and above                           @2.00
   
   
# include<stdio.h>
int main()
{
	int ID,unit;
	float bill;
	char name[100];
	printf("enter ID");
	scanf("%d",&ID);
	printf("enter name");
	scanf("%s",&name);
	printf("enter total unnits used by you");
	scanf("%d",&unit);
	if(unit<350)
	{
		bill=unit*1.20;
	}
	else if(unit>=350 && unit<600)
	{
		bill=unit*1.50;
	}
	else if(unit>=600 &&unit<800)
	{
		bill=unit*1.80;
	}
	else{
		bill=unit*2;
	}
	//surcharge
	if(bill>800)
	{
		bill+=bill*0.18;
	}
	printf("\n========BILL=========\n");
	printf("Customer ID: %d\nCustomer name:%s\ntotal units:%d\nBILL amount is:%f",ID,name,unit,bill);
	return 0;
}

