//Q6. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;
class Person 
{
private:
    string name;
    int age;
    string country;

public:
    Person(string n, int a, string c) 
	{
        name = n;
        age = a;
        country = c;
    }

    Person() 
	{
        name = "";
        age = 0;
        country = "";
    } 
    
    void Name(string n) 
	{
        name = n;
    }


    void Age(int a) 
	{
        if (a > 0) 
		{
            age = a;
        } 
		else 
		{
            cout << "Invalid age!" << endl;
        }
    }


    void Country(string c) 
	{
        country = c;
    }


    string getName() const 
	{
        return name;
    }

    
    int getAge() const 
	{
        return age;
    }

    
    string getCountry() const 
	{
        return country;
    }

    
    void displayDetails() const 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};


int main() 
{
    
    Person person1("Alice", 30, "indai");
    person1.displayDetails();
    Person person2;
    person2.Name("Bob");
    person2.Age(25);
    person2.Country("Canada");
    person2.displayDetails();
    person2.Age(50);

    return 0;
}

