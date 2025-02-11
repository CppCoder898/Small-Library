#include<iostream>
using namespace std;

double areOfSquare(double length);

int main()
{

    double length;

    cout << "Enter length: ";
    cin >> length;

    double area = areOfSquare(length);
    cout << "Area: " << area;

    return 0;
}

double areOfSquare(double length)
{
    return length * length;
}

/*
 *
 * In-notes
 * --------
 *
 * Instead of the 'void', we can use int, double, bool, string, char depending on what date-type its returning.
 * The return keyword is just like its name, just return it, lol.
 * 
 * A function bool will return true or false, a string would return string.
 * One thing to consider that void function can't return value.
 *
 * Next: "OverLoadedFunctions";
 *
 */