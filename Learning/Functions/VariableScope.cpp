#include<iostream>
using namespace std;

int a = 5;  //<-Global variable

void c();

int main()
{

    int b = 4; //<- Local variable

    cout << a << '\n';
    cout << b << '\n';
    //cout << c;         //(error) OFC not possible.
    c();

    return 0;
}

void c()
{

    int c = 3;

    cout << a << '\n';
    cout << c << '\n';
    //cout << b;            //(error) Not possible since we didnt give it access
}

/*
 *
 * In-notes
 * --------
 *
 * Variable scope is basically its limitations.
 * 
 * A variable in a function is limited to function, untill it sends arguements to it.
 * A variable cretaed in a loop is limited to loop not even to the function.
 * A variable created outside of any function is a global variable, it can be used in ANY function.
 *
 * If you notice above all 3 line start with "A variable" lol.
 * 
 * Next: "PassByValueVsRefrence"; Value vs refrence, I suppot VALUE!
 *
 */