//Q13.Write a program to find the max number from given two numbers using friend function

#include <iostream>
using namespace std;

class Number;
int findMax(Number n1, Number n2);

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    friend int findMax(Number n1, Number n2);
};

int findMax(Number n1, Number n2) 
{
    return (n1.value > n2.value) ? n1.value : n2.value;
}

int main() 
{
    Number num1(10);
    Number num2(20);
    int maxNumber = findMax(num1, num2);

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

