//Q3. Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member
//functions to get and set these variables.

#include <iostream>
#include <string>
using namespace std;
class Car 
{
private:
    string company;
    string model;
    int year;

public:
    Car(string c, string m, int y) 
	{
        company = c;
        model = m;
        year = y;
    }

    Car() 
	{
        company = "";
        model = "";
        year = 0;
    }

    void Company(string c) 
	{
        company = c;
    }
    
    void Model(string m) 
	{
        model = m;
    }

    void Year(int y) 
	{
        if (y > 0) 
		{
            year = y;
        } 
		else 
		{
            cout << "Invalid year!" << endl;
        }
    }

    string getCompany() const 
	{
        return company;
    }

    string getModel() const 
	{
        return model;
    }

    int getYear() const 
	{
        return year;
    }

    void displayDetails() const 
	{
        cout << "Company is: " << company << endl;
        cout << "Model is: " << model << endl;
        cout << "Year is: " << year << endl;
    }
};

int main() 
{
    Car car1("Toyota", "Camry", 2021);
    car1.displayDetails();
    
    Car car2;
    car2.Company("Honda");
    car2.Model("Accord");
    car2.Year(2022);
    car2.displayDetails();
    car2.Year(-2020);

    return 0;
}

