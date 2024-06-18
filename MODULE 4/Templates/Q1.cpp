//Q1. Write a program of to swap the two values using template
 
#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int no1,no2;
    cout<<"enter a number one";
    cin>>no1;
    cout<<"enter a number two";
    cin>>no2;
    cout << "Before swapping: no1 = " << no1 << ", no2 = " << no2 << endl;
    swapValues(no1, no2);
    cout << "After swapping: no1 = " << no1 << ", no2 = " << no2 << endl;


    return 0;
}

