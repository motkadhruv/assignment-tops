//Q7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance


#include <iostream>
using namespace std;

class Base {
protected:
    int baseValue;

public:
    Base(int value) : baseValue(value) {
        cout << "Base class constructor called with baseValue: " << baseValue << endl;
    }

    void displayBaseValue() const {
        cout << "Base Value: " << baseValue << endl;
    }
};

class Intermediate : public Base {
protected:
    int intermediateValue;

public:
    Intermediate(int baseVal, int interVal) : Base(baseVal), intermediateValue(interVal) {
        cout << "Intermediate class constructor called with intermediateValue: " << intermediateValue <<endl;
    }

    void displayIntermediateValue() const {
        cout << "Intermediate Value: " << intermediateValue << endl;
    }
};

class Derived : public Intermediate {
private:
    int derivedValue;

public:
    Derived(int baseVal, int interVal, int derVal) : Intermediate(baseVal, interVal), derivedValue(derVal) {
        cout << "Derived class constructor called with derivedValue: " << derivedValue << endl;
    }

    void displayDerivedValue() const {
        cout << "Derived Value: " << derivedValue << endl;
    }

    void displayAllValues() const {
        displayBaseValue();
        displayIntermediateValue();
        displayDerivedValue();
    }
};

int main() 
{
    Derived derivedObj(10, 20, 30);
    cout << "\nDisplaying all values:\n";
    derivedObj.displayAllValues();

    return 0;
}

