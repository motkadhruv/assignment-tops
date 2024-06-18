//Q1. WAP to create simple calculator using class

#include <iostream>
using namespace std;
class Calculator 
{
public:

    double add(double a, double b) 
	{
        return a + b;
    }


    double subtract(double a, double b) 
	{
        return a - b;
    }


    double multiply(double a, double b) 
	{
        return a * b;
    }


    double divide(double a, double b) 
	{
        if (b != 0)
            return a / b;
        else 
		{
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() 
{
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch(operation) 
	{
        case '+':
            cout << "add is: " << calc.add(num1, num2) << endl;
            break;
            
        case '-':
            cout << "subract is: " << calc.subtract(num1, num2) << endl;
            break;
            
        case '*':
            cout << "multiply is: " << calc.multiply(num1, num2) << endl;
            break;
            
        case '/':
            cout << "divide is: " << calc.divide(num1, num2) << endl;
            break;
            
        default:
            cout << "Invalid operator!" << endl;
            
    }

    return 0;
}

