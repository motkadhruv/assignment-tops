//Q1. Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;
class Calculator 
{
public:
    inline double multiply(double a, double b) 
	{
        return a * b;
    }

    inline double cubic(double a) 
	{
        return a * a * a;
    }
};

int main() 
{
    Calculator calc;
    double num1, num2;

    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << calc.multiply(num1, num2) << endl;

    cout << "Enter a number to find its cubic value: ";
    cin >> num1;
    cout << "Cubic value of " << num1 << " is: " << calc.cubic(num1) << endl;

    return 0;
}

