#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void get_info()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void show_info() 
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }

    void perimeter() 
    {
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};

int main()
{
    Rectangle b1;

    b1.get_info();
    b1.show_info();
    b1.area();
    b1.perimeter();

    return 0;
}
