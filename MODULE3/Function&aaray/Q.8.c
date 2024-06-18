//Q8. WAP to reverse a string and check that the string is palindrome or not Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address andage
//b. Write a program of structure for five employee that provides the following information -print and display empno, empname, address andage

//#include<stdio.h>
//struct employee{
//	int no;
//	char name[100];
//	char address[100];
//	int age;
//};
//
//int main()
//{
//	struct employee e1;
//	printf("enter the no, name, address and age\n");
//	scanf("%d %s %s %d",&e1.no,&e1.name,&e1.address,&e1.age);
//	
//	printf("\n%d is no\n%s is name\n%s is address\n%d is age",e1.no,e1.name,e1.address,e1.age);
//	return 0;
//}

#include<stdio.h>
struct employee{
	int no;
	char name[100];
	char address[100];
	int age;
};

int main()
{
	struct employee e1[5];
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter no name address and age for %d employee",i+1);
		scanf("%d %s %s %d",&e1[i].no,&e1[i].name,&e1[i].address,&e1[i].age);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n deteile of %d employee",i+1);
		printf("no is:%d\nname is;%s\naddress is:%s\nage is:%d\n",e1[i].no,e1[i].name,e1[i].address,e1[i].age);
	}
 
	return 0;
}
