//Q3. Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)


#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void PersonData(const string& n, int a) {
        name = n;
        age = a;
    }

    void readPersonData() {
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
    float percentage;

public:
    void StudentData(const string& n, int a, float p) {
        PersonData(n, a);
        percentage = p;
    }

    void readStudentData() {
        readPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cin.ignore();
    }

    
    void displayStudentData() const {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    void TeacherData(const string& n, int a, float s) {
        PersonData(n, a);
        salary = s;
    }

    
    void readTeacherData() {
        readPersonData();
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore(); 
    }

    // Function to write teacher data
    void displayTeacherData() const {
        displayPersonData();
        cout << "Salary is:" << salary << endl;
    }
};

int main() {
    Student student;
    cout << "Enter student details:\n";
    student.readStudentData();
    cout << "\nStudent Details:\n";
    student.displayStudentData();

    
    Teacher teacher;
    cout << "\nEnter teacher details:\n";
    teacher.readTeacherData();
    cout << "\nTeacher Details:\n";
    teacher.displayTeacherData();

    return 0;
}




