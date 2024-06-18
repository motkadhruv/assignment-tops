//Q6. Write a C++ Program to show access to Private Public and Protected using Inheritance


#include <iostream>
using namespace std;


class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    Base(int pv, int protv, int pubv) : privateVar(pv), protectedVar(protv), publicVar(pubv) {}

    void displayPrivateVar() const {
        cout << "Private Variable (Base): " << privateVar << endl;
    }

    void displayProtectedVar() const {
      cout << "Protected Variable (Base): " << protectedVar << endl;
    }

    void displayPublicVar() const {
       cout << "Public Variable (Base): " << publicVar << endl;
    }
};

class Derived : public Base {
public:
    Derived(int pv, int protv, int pubv) : Base(pv, protv, pubv) {}

    void displayAccess() {
        cout << "Protected Variable (Derived): " << protectedVar << endl;
        cout << "Public Variable (Derived): " << publicVar << endl;
    }
};

int main() 
{
    Derived derivedObj(10, 20, 30);
    cout << "Access through Base class methods:\n";
    derivedObj.displayPrivateVar();
    derivedObj.displayProtectedVar();
    derivedObj.displayPublicVar();
    cout << "\nAccess directly in Derived class:\n";
    derivedObj.displayAccess();
    cout << "\nAccess directly from main:\n";
cout << "Public Variable (Main): " << derivedObj.publicVar << endl;

    return 0;
}

