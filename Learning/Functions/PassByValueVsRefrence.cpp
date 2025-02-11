#include<iostream>
using namespace std;

void function1(int a, int b);
void function2(int &a, int &b);

int main()
{

    int a = 5;
    int b = 10;
    //Swaping varaible value

    cout << "1. " << a << " " << b << '\n';
    function1(a, b);
    cout << "2. " << a << " " << b << '\n';
    function2(a, b);
    cout << "3. " << a << " " << b << '\n';

    return 0;
}

void function1(int a, int b)
{

    int temp = a;
    a = b;
    b = temp;

}

void function2(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
    
}

/*
 *
 * In-notes
 * --------
 *
 * So when you pass arguemnts to a function rather than taking them it creates a clone, 
 * with same value and it is called "Pass by value";
 * 
 * But, if we put an '&' just right before the name it takes orignal one rather than creating a clone,
 * it is called "Pass by refrence";
 * 
 * If you are working with clone varaibles no changes will be made to orginal ones. 
 *
 * Next: "Recursion";
 *
 */