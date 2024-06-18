//Q8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement
//using of aggregation

#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string street;
    string city;
    string state;
    string zipCode;

    Address() {}
    Address(string s, string c, string st, string z) 
        : street(s), city(c), state(st), zipCode(z) {}

    void display() const {
        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;
    Address address;

public:

    Student(string n,string sc, int rn, float m, Address a)
        : name(n), studentClass(sc), rollNumber(rn), marks(m), address(a) {}


    char calculateGrade() const {
        if (marks >= 90) 
		{
            return 'A';
        } 
		else if (marks >= 80) 
		{
            return 'B';
        } 
		else if (marks >= 70) 
		{
            return 'C';
        } 
		else if (marks >= 60) 
		{
            return 'D';
        } 
		else 
		{
            return 'F';
        }
    }


    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber <<endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.display();
    }
};

int main() 
{
    Address addr("ahemdabad", "Springfield", "IL", "62704");
    Student student("motka dhruv", "10th Grade", 15, 85.5, addr);
    student.displayInfo();

    return 0;
}


