#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    int RollNumber;
    string Name;
    int Physics;
    int Chemistry;
    int Maths;

    void GetInfo()
    {
        cout<<"Enter student roll number:"<<endl;
        cin>>RollNumber;
        cout<<"Enter student name:"<<endl;
        getline(cin>>ws, Name);          // reads full name with spaces
        cout<<"Enter student Physics Marks:"<<endl;
        cin>>Physics;
        cout<<"Enter student Chemistry Marks:"<<endl;
        cin>>Chemistry;
        cout<<"Enter student Maths Marks:"<<endl;
        cin>>Maths;
    }

    void DisplayInfo()
    {
        cout<<"Student's Roll number:"<<RollNumber<<endl;
        cout<<"Student's Name:"<<Name<<endl;
        cout<<"Student's Physics Marks:"<<Physics<<endl;
        cout<<"Student's Chemistry Marks:"<<Chemistry<<endl;
        cout<<"Student's Maths Marks:"<<Maths<<endl;
    }

    void Result()
    {
        float Percentage;
        Percentage=(Physics+Chemistry+Maths)/3.0;   // 3.0 keeps decimals
        cout<<"Percentage of student:"<<Percentage<<"%"<<endl;
    }
};

int main()
{
    Student s[3];
    for(int i=0; i<3; i++)
    {
        cout<<"........Student"<<i+1<<" Information......"<<endl;
        s[i].GetInfo();
        s[i].DisplayInfo();
        s[i].Result();
    }
    return 0;
}
