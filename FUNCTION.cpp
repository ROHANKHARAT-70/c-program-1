include<iostream>
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
        cin>>Name;
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
        Percentage=(Physics+Chemistry+Maths)/3;
        cout<<"Result of student:"<<Percentage<<endl;
    }
};
int main()
{
    Student Student1,Student2,Student3;
    cout<<"........Student1 Information......"<<endl;
    Student1.GetInfo();
    Student1.DisplayInfo();
    Student1.Result();
    cout<<"........Student2 Information......"<<endl;
    Student2.GetInfo();
    Student2.DisplayInfo();
    Student2.Result();
    cout<<"........Student3 Information......"<<endl;
    Student3.GetInfo();
    Student3.DisplayInfo();
    Student3.Result();
}
