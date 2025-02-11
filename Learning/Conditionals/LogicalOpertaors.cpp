#include<iostream>
using namespace std;

int main()
{

    int a;
    bool x = true; //new data type!

    cout << "Enter a num: ";
    cin >> a;

    if(a > 9 && a < 100) //and
    {
        cout << "2-digit number!\n";
    }
    else{cout << "Not a 2-digit number!\n";}

    if(a%3 == 0 || a%5 == 0) //or
    {
        cout << "Divisible by 3 or 5\n";
    }
    else{cout << "Not divisible by 3 or 5\n";}

    if(!x) //not
    {
        cout << "X = false";
    }
    else{cout << "X = true";}


    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * && = (and) 2 conditions needs to be true
 * || = (or) 1 condition needs to be true
 * ! = (not) To check if a bool is not true "x == false" = "!x";
 *
 * The bool is a datatype for varaible that can only store true or false mainly used with 'if's 
 * fun fact: if you print a bool the output will be 1 for true, 0 for false!
 *
 * also you can use &&, || directly with their name like: if(a > b and a > c) {blah blah blah;}
 * Or if(a > 0 or a < 100) {skibidi dop yes;} (brainrot is consuming me send help)
 *
 * Next: "Switches"; 
 *
 */