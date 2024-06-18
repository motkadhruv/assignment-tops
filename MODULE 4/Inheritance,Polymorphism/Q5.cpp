//Q5. Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)


#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayRollNumber() const {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Students {
protected:
    float marks1;
    float marks2;

public:
    // Function to input marks
    void inputMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }

    void displayMarks() const {
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
    }
};

class Result : public Test {
private:
    float totalMarks;

public:
    void calculateTotalMarks() {
        totalMarks = marks1 + marks2;
    }

    void displayResult() const {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    Result result;
    result.inputRollNumber();
    result.inputMarks();
    result.calculateTotalMarks();
    cout << "\nStudent Result:\n";
    result.displayResult();

    return 0;
}

