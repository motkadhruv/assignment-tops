//Q1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)


#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;
    string country;

public:

    void inputBasicData() 
	{
        cout << "Enter cricketer's name: ";
        getline(std::cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter country: ";
        cin>>country;
    }


    void displayBasicData() const {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age <<endl;
        cout << "Country: " << country <<endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() {
        inputBasicData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest score): ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }


    void calculateAverageRuns() {
        const int matchesPlayed = 20;
        averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
    }

    void displayData() const {
        displayBasicData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns <<endl;
        cout << "Best Performance: " << bestPerformance <<endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    cout << "\nBatsman Details:\n";
    batsman.displayData();

    return 0;
}

