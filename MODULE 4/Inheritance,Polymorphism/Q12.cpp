//Q12.Write a program to swap the two numbers using friend function without using third variable

//
//#include <iostream>
//
//using namespace std;
//
//class Number {
//private:
//    int value;
//
//public:
//    Number(int val) : value(val) {}
//
//    void display() const {
//        cout << value;
//    }
//
//    // Declare the friend function
//    friend void swapNumbers(Number &num1, Number &num2);
//};
//
//// Friend function to swap the values of two Number objects without using a third variable
//void swapNumbers(Number &num1, Number &num2) {
//    num1.value = num1.value + num2.value;
//    num2.value = num1.value - num2.value;
//    num1.value = num1.value - num2.value;
//}
//
//int main() {
//    int val1, val2;
//    cout << "Enter the first number: ";
//    cin >> val1;
//    cout << "Enter the second number: ";
//    cin >> val2;
//
//    Number num1(val1);
//    Number num2(val2);
//
//    cout << "Before swapping:" << endl;
//    cout << "Number 1: ";
//    num1.display();
//    cout << "\nNumber 2: ";
//    num2.display();
//    cout << endl;
//
//    swapNumbers(num1, num2);
//
//    cout << "After swapping:" << endl;
//    cout << "Number 1: ";
//    num1.display();
//    cout << "\nNumber 2: ";
//    num2.display();
//    cout << endl;
//
//    return 0;
//}


//friend function
#include<iostream>
using namespace std;
class swaping{
	int no1,no2;

	public:
		friend void get(swaping);
};

void get(swaping g1)
{
	
	
	g1.no1=g1.no1+g1.no2;
	g1.no2=g1.no1-g1.no2;
	g1.no1=g1.no1-g1.no2;
	
}
int main()
{ 
   int n1,n2;
	cout<<"enter number one";
	cin>>n1;
	cout<<"enter number two";
	cin>>n2;
	cout<<"beforswaping"<< "number one is:"<<n1<<"number two is:"<<n2;
	

 swaping obj;
 
 get(obj);
 
 
	cout<<"aftorswaping"<<"number one is:"<<n1<<"number two is:"<<n2;
 
 return 0;
}

