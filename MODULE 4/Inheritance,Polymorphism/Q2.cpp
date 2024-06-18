//Q2. Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;


class Shape {
protected:
    double length;
    double width;

public:

    void inputDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};

class Rectangle : public Shape {
public:
	
    double calculateArea() const {
        return length * width;
    }

    void displayArea() const {
        cout << "Area of the rectangle: " << calculateArea() <<endl;
    }
};

int main() 
{
    Rectangle rect;
    rect.inputDimensions();
    rect.displayArea();
    
    return 0;
    
}

