#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary, bonus, totalSalary;

public:
    // Default Constructor
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
    }

    // Parameterized Constructor
    Employee(int i, string n, float s, float b)
    {
        id = i;
        name = n;
        salary = s;
        bonus = b;
    }

    void calculate()
    {
        totalSalary = salary + bonus;
    }

    void display()
    {
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << totalSalary << endl;
    }
};

int main()
{
    Employee e1;   // Default constructor

    Employee e2(101, "Rahul", 30000, 5000);  // Parameterized constructor

    e1.calculate();
    e2.calculate();

    cout << "Default Constructor Employee:";
    e1.display();

    cout << "\nParameterized Constructor Employee:";
    e2.display();

    return 0;
}
