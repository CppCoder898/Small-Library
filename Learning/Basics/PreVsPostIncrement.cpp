#include<iostream>
using namespace std;

int main()
{

    int c = 1;
    c++; //adds 1  Post increment
    c--; //subtracts 1 Post decrement

    ++c; //adds 1   Pre increment
    --c; //subtarcts 1 Post decremnt

    cout << c << '\n';      //output = 1
    cout << c++ << '\n';    //output = 1
    cout << c << '\n';      //output = 2

    c--;

    cout << c << '\n';      //output = 1
    cout << ++c << '\n';    //output = 2
    cout << c << '\n';      //output = 2

    return 0;
}

/*
 * In-notes
 * --------
 * 
 * When we use post increment/decrement, we first use its value, then we update it.
 * But when we use pre increment/decremnt we first UPDATE value and then use the updated value.
 * 
 * However, if you're normally using c++; to add 1, it will just add 1 normally.
 * Cuz theres nothing to use.
 * 
 * Next: "Const"; I don't really have any good line to fit here >:(
 *
 */
