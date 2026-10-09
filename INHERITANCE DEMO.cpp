#include <iostream>
using namespace std;

// Single Inheritance
class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
    int rollNo;

public:
    void getStudent()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
    }
};


// Multilevel Inheritance
class Vehicle
{
protected:
    string brand;

public:
    void getVehicle()
    {
        cout << "\nEnter vehicle brand: ";
        cin >> brand;
    }

    void displayVehicle()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle
{
protected:
    string model;

public:
    void getCar()
    {
        cout << "Enter car model: ";
        cin >> model;
    }

    void displayCar()
    {
        displayVehicle();
        cout << "Model: " << model << endl;
    }
};

class ElectricCar : public Car
{
    int battery;

public:
    void getElectricCar()
    {
        cout << "Enter battery capacity: ";
        cin >> battery;
    }

    void displayElectricCar()
    {
        displayCar();
        cout << "Battery Capacity: " << battery << " kWh" << endl;
    }
};


int main()
{
    // Single Inheritance
    Student s;

    cout << "----- Single Inheritance -----" << endl;
    s.getPerson();
    s.getStudent();

    cout << "\nStudent Details:" << endl;
    s.displayStudent();


    // Multilevel Inheritance
    ElectricCar e;

    cout << "\n----- Multilevel Inheritance -----" << endl;
    e.getVehicle();
    e.getCar();
    e.getElectricCar();

    cout << "\nElectric Car Details:" << endl;
    e.displayElectricCar();

    return 0;
}
