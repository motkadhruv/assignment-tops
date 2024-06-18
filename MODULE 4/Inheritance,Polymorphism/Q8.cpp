//Q8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and
//Function Overloading


#include<iostream>
using namespace std;
//function overloading is concept when the function name is same
//with having diffrent work
//1)with diffrent number of parameters
//2)with diffrent datatypes of parameters

class calcuator{
	 int n1,n2;
	 public:
	 	
	 	void operation()
	 	{
	 		cout<<"enter value of n1 and n2";
	 		cin>>n1>>n2;
	 		cout<<"addition is"<<n1+n2;
		 }
		 
		 void operation(int no1,int no2)
		 {
		 	n1=no1;
		 	n2=no2;
		 	cout<<"subtraction"<<n1-n2;
		 }
		 
		 
		 void operation(double no1,double no2)
		 {
		 	n1=no1;
		 	n2==no2;
		 	cout<<"multiplication of 2 values is"<<n1*n2;
		 }
		 
		 void operation(double no1,int no2)
		 {
		 	n1=no1;
		 	n2=no2;
		 	cout<<"division of 2 values is"<<n1/n2;
		 }
		 
		 void operation(int no1)
		 {
		 	int no2;
		 	cout<<"enter value of no2 for modulo";
		 	cin>>no2;
		 	n1=no1;
		 	n2=no2;
		 	cout<<"modulo of 2 values is"<<n1%n2;
		 	
		  }
		 
};

int main()
{
	calcuator obj;
	char choice;
	cout<<"+ - * / %";
	cin>>choice;
	int no1,no2;
	double n1,n2;
	switch(choice)
	{
		case'+':
			obj.operation();
			break;
			
		case'-':
		   cout<<"enter 2 values for subtraction";
		   cin>>no1>>no2;
		   obj.operation(no1,no2);
		   break;
		   
		case '*':
		cout<<"enter 2 values for multiplication";
		cin>>n1>>n2;  
		obj.operation(n1,n2); 
		break;	
		
		case '/':
		cout<<"enter 2 values for division";
		cin>>n1>>no2;  
		obj.operation(n1,no2);
		break; 
		
		case '%':
		cout<<"enter frist values for modulo";
		cin>>no1;
		obj.operation(no1); 
		break;
		
		default:
			cout<<"invalid";
	}
	
	return 0;
	
}

