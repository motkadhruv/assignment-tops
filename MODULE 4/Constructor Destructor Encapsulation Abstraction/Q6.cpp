//Q6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee performance. Using of constructor


#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee() : name(""), employeeID(0), salary(0.0) {}

    Employee(string empName, int empID, double empSalary) 
        : name(empName), employeeID(empID), salary(empSalary) {}

    void EmployeeDetails(string empName, int empID, double empSalary) 
	{
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    void displayEmployeeDetails() const 
	{
        cout << "Name: " << name <<endl;
        cout << "Employee ID: " << employeeID <<endl;
        cout << "Salary: " << salary << endl;
    }
    void SalaryBasedOnPerformance(char performanceGrade) 
	{
        switch (performanceGrade) 
		{
            case 'A':
                salary *= 1.10;
                break;
                
            case 'B':
                salary *= 1.05;
                break;
                
            case 'C':
                salary *= 1.02;
                break;
                
            case 'D':
                salary *= 1.00;
                break;
                
            case 'E':
                salary *= 0.90;
                break;
                
            default:
                cout << "Invalid performance grade!" <<endl;
        
        }
    }

    double getSalary() const {
        return salary;
    }
};

int main() 
{
    Employee emp1("dhruv motka", 12345, 50000);
    emp1.displayEmployeeDetails();
    emp1.SalaryBasedOnPerformance('A');
    cout << "\nAfter performance evaluation:\n";
    emp1.displayEmployeeDetails();

    return 0;
}

