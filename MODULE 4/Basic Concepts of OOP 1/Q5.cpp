//Q5. Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;
class Rectangle 
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) 
	{
        length = l;
        width = w;
    }

    double calculateArea() const 
	{
        return length * width;
    }

    double calculatePerimeter() const 
	{
        return 2 * (length + width);
    }

    // Method to set the length
    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Invalid length!" << endl;
        }
    }

    // Method to set the width
    void setWidth(double w) 
	{
        if (w > 0) 
		{
            width = w;
        } 
		else 
		{
            cout << "Invalid width!" << endl;
        }
    }

    double getLength() const 
	{
        return length;
    }

    double getWidth() const 
	{
        return width;
    }

    void displayDetails() const 
	{
        cout << "Length is: " << length << endl;
        cout << "Width is: " << width << endl;
        cout << "Area is: " << calculateArea() << endl;
        cout << "Perimeter is: " << calculatePerimeter() << endl;
    }
};

int main() 
{
    Rectangle myRectangle(10.0, 5.0);
    myRectangle.displayDetails();
    myRectangle.setLength(15.0);
    myRectangle.setWidth(7.5);
    myRectangle.displayDetails();

    return 0;
}

