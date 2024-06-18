//Q4. Write a C++ Program display Student Mark sheet using Multiple inheritance


#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void inputPersonData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPersonData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;
    string course;

public:
    void inputStudentData() {
        inputPersonData();
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter course: ";
        getline(cin, course);
    }

    void displayStudentData() const {
        displayPersonData();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};


class Marks {
protected:
    float marks1;
    float marks2;
    float marks3;

public:
    void inputMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;
        cin.ignore();
    }
    
    void displayMarks() const {
        cout << "Marks for subject 1: " << marks1 << endl;
        cout << "Marks for subject 2: " << marks2 << endl;
        cout << "Marks for subject 3: " << marks3 << endl;
    }

    float calculateTotalMarks() const {
        return marks1 + marks2 + marks3;
    }

    float calculateAverageMarks() const {
        return calculateTotalMarks() / 3.0;
    }
};

class Marksheet : public Student, public Marks {
public:
    void inputMarksheetData() {
        inputStudentData();
        inputMarks();
    }


    void displayMarksheet() const {
        displayStudentData();
        displayMarks();
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "Average Marks: " << calculateAverageMarks() << endl;
    }
};

int main() 
{

    Marksheet marksheet;
    
    
    cout << "Enter student details and marks:\n";
    marksheet.inputMarksheetData();
    cout << "\nStudent Marksheet:\n";
    marksheet.displayMarksheet();

    return 0;
}

