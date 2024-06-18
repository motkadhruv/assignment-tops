//Q4. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include <iostream>
#include <cmath>
using namespace std;
class Circle 
{
private:
    double radius;

public:
    Circle(double r) 
	{
        radius = r;
    }


    double calculateArea() const 
	{
        return M_PI * radius * radius;
    }


    double calculateCircumference() const 
	{
        return 2 * M_PI * radius;
    }


    void setRadius(double r) 
	{
        if (r > 0) 
		{
            radius = r;
        } 
		else 
		{
            cout << "Invalid radius!" << endl;
        }
    }


    double getRadius() const 
	{
        return radius;
    }


    void displayDetails() const 
	{
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main() 
{

    Circle myCircle(5.0);
    myCircle.displayDetails();
    myCircle.setRadius(10.0);
    myCircle.displayDetails();

    return 0;
}

