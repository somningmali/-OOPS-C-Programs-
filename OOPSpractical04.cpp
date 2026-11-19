
#include <iostream>
using namespace std;
class Vehicle
{
public:
    virtual void calculateRentalFee() = 0;

    virtual ~Vehicle()
    {
        cout << "Vehicle destructor called" << endl;
    }
};

class Car : public Vehicle
{
public:
    void calculateRentalFee()
    {
        int days = 3;
        int rate = 1000;
        cout << "Car Rental Fee: Rs. " << days * rate << endl;
    }

    ~Car()
    {
        cout << "Car destructor called" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void calculateRentalFee()
    {
        int days = 3;
        int rate = 300;
        cout << "Bike Rental Fee: Rs. " << days * rate << endl;
    }

    ~Bike()
    {
        cout << "Bike destructor called" << endl;
    }
};

class Truck : public Vehicle
{
public:
    void calculateRentalFee()
    {
        int days = 3;
        int rate = 2000;
        cout << "Truck Rental Fee: Rs. " << days * rate << endl;
    }

    ~Truck()
    {
        cout << "Truck destructor called" << endl;
    }
};

int main()
{
    Vehicle *v1 = new Car();
    Vehicle *v2 = new Bike();
    Vehicle *v3 = new Truck();

    v1->calculateRentalFee();
    v2->calculateRentalFee();
    v3->calculateRentalFee();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}

/*Output :
PS C:\Users\student\Desktop\Helllo\output> cd 
'c:\Users\student\Desktop\Helllo\output'
PS C:\Users\student\Desktop\Helllo\output> & 
.\'Vechicle78SM.exe'
Car Rental Fee: Rs. 3000
Bike Rental Fee: Rs. 900
Truck Rental Fee: Rs. 6000
Car destructor called
Vehicle destructor called
Bike destructor called
Vehicle destructor called
Truck destructor called
Vehicle destructor called
PS C:\Users\student\Desktop\Helllo\output> */
