#include<iostream>
using namespace std;

int main()
{

    //2 ways
    string name;
    int b;
    int c;

    cout << "Enter your name: ";
    cin >> name;                   //(needs std::)

    cout << "Enter birthdate (m/y): ";
    cin >> b >> c;

    cout << "Name: " <<  name << '\n';
    cout << "Birthdate: " << b << "/" << c << '\n';

    cout << "Hi " << name << "! Welcom to C++\n";

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * You can store users input in varaibles with cin.
 * cin stands for charcater input.
 * 
 * You can also take input of chars, but it can be only 1 character cuz of their capacity.
 * 
 * next: "CMath";
 *
 */
