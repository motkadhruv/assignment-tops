//Q11.Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area


#include <iostream>
#include <cmath> 
using namespace std;
double calculateArea(double area) {
    return M_PI * area * area;
}

double calculateArea(double area, double breadth) {
    return area * breadth;
}

double calculateArea(double area, double breadth, bool isTriangle) {
    if (isTriangle) {
        return 0.5 * area * breadth;
    }
    return 0.0;
}

int main() {
    double area,breadth;

    cout << "Enter the radius of the circle: ";
    cin >> area;
    cout << "Area of circle: " << calculateArea(area) << endl;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> area >> breadth;
    cout << "Area of rectangle: " << calculateArea(area, breadth) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> area >> breadth;
    cout << "Area of triangle: " << calculateArea(area, breadth, true) << endl;

    return 0;
}

