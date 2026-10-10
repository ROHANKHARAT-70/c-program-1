#include <iostream>
using namespace std;

class Test2;   // Forward declaration

class Test1
{
    int value1;
    static int count;

public:
    Test1(int v)
    {
        value1 = v;
        count++;
    }

    // Static member function
    static void showCount()
    {
        cout << "Number of objects: " << count << endl;
    }

    // Friend function
    friend void compare(Test1, Test2);

    // Friend class
    friend class Helper;
};

// Definition of static data member
int Test1::count = 0;


class Test2
{
    int value2;

public:
    Test2(int v)
    {
        value2 = v;
    }

    // Friend function
    friend void compare(Test1, Test2);
};


// Friend function for comparing private data
void compare(Test1 a, Test2 b)
{
    if (a.value1 > b.value2)
        cout << "Test1 value is greater." << endl;
    else if (a.value1 < b.value2)
        cout << "Test2 value is greater." << endl;
    else
        cout << "Both values are equal." << endl;
}


// Friend class
class Helper
{
public:
    void display(Test1 a)
    {
        cout << "Private value of Test1: " << a.value1 << endl;
    }
};


int main()
{
    Test1 obj1(50);
    Test1 obj2(30);
    Test2 obj3(40);

    // Static member function
    Test1::showCount();

    // Friend function
    compare(obj1, obj3);

    // Friend class
    Helper h;
    h.display(obj1);

    return 0;
}
