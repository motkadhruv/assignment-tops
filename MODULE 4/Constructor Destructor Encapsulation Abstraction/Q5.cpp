//Q5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;
class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) 
	{
        if (ValidTriangle(s1, s2, s3)) 
		{
            side1 = s1;
            side2 = s2;
            side3 = s3;
        } 
		else 
		{
            cout << "Invalid triangle sides!" << endl;
            side1 = side2 = side3 = 0;
        }
    }

    bool ValidTriangle(double s1, double s2, double s3) 
	{
        return (s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1);
    }

    bool Equilateral() const 
	{
        return (side1 == side2) && (side2 == side3);
    }

    bool Isosceles() const 
	{
        return (side1 == side2) || (side1 == side3) || (side2 == side3);
    }

    bool Scalene() const 
	{
        return (side1 != side2) && (side1 != side3) && (side2 != side3);
    }

    void displayType() const 
	{
        if (!ValidTriangle(side1, side2, side3)) 
		{
            cout << "Not a valid triangle" << endl;
        } 
		else if (Equilateral()) 
		{
            cout << "The triangle is Equilateral." << endl;
        } 
		else if (Isosceles()) 
		{
            cout << "The triangle is Isosceles." << endl;
        } 
		else if (Scalene()) 
		{
            cout << "The triangle is Scalene." << endl;
        }
    }
};

int main() 
{
    Triangle triangle1(3, 3, 3);
    Triangle triangle2(3, 4, 3);
    Triangle triangle3(3, 4, 5);
    cout << "Triangle 1: ";
    triangle1.displayType();
    cout << "Triangle 2: ";
    triangle2.displayType();
	cout << "Triangle 3: ";
    triangle3.displayType();

    return 0;
}

