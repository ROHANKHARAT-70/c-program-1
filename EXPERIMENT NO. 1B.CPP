#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;
    float marks;

public:
    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}
