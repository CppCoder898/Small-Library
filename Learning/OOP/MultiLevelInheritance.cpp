#include<iostream>
using namespace std;

class Viechle //Grand-class
{
    public:
        int speedAVG;
        int seats;
        int wheels;

};

class Bycycle : public Viechle //parent class - child class
{
    public:
        Bycycle() //Automatically done for child class too.
        {
            wheels = 2;
            seats = 2;
            speedAVG = 30; //idk avrage cycle speed \[-_-]/
        }

};

class Bike : public Bycycle //child class - grand-child class
{
    public:
        bool gears = true; //just a special attribute.

    void print()
    {
        cout << "Wheels: " << wheels << '\n';
        cout << "Seats: " << seats << '\n';
        cout << "AVG speed: " << speedAVG << "km/ph\n";
        cout << "Gears: " << gears << '\n'; // 0 = false, 1 = true.
    }

};

int main()
{

    Bike bike;

    bike.print(); //tbh this function was so satisfying to use :-]

    return 0;
}

/*
 * In-notes
 * --------
 *
 * The grand class has 3 members. (viechle avg requirments)
 * They are inherited to parent class.
 * 
 * then, a child class inherits from parent class AND grand class. 
 * 
 * Simple as that :D
 * 
 * Next: "MultipleInheritance"; NotMe you;
 * 
 */