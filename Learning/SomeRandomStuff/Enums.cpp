#include<iostream>
using namespace std;

enum Day {sunday = 1, monday = 2, tuesday = 3, wednessday = 4, thursday = 5, friday = 6, saturday = 7};

int main()
{

    Day today = sunday;

    switch(today)
    {
        case sunday:
          cout << "Today is sunday!";
          break;

        case monday:
          cout << "Today is monday!";
          break;

        case tuesday:
          cout << "Today is tuesday!";
          break;

        case wednessday:
          cout << "Today is wednessday!";
          break;

        case thursday:
          cout << "Today is thursday!";
          break;

        case friday:
          cout << "Today is friday!";
          break;

        case saturday:
          cout << "Today is saturday!";
          break;

        default:
          cout << "Why is this even printing?";
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * Enums are custom-made own datatype but with limitations.
 * They still can be usefull.
 *
 * You can make an enum like flavours, or colors, planets etc.
 * Also it is not important to give them number it can also be like: "enum flavous {Choclate, Vanilla};"
 *
 * Next: "Structs"; This is more like an OOP thing but i wanted to add it in this folder IDK why.
 *
 */
