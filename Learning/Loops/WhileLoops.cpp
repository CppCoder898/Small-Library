#include<iostream>
using namespace std;

int main()
{

    int i = 1;

    while(i <= 10)
    {
        cout << "Hello\n";
        i++;
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * While loops have much simple syntax, here everything is not packed.
 * define varaible outside.
 * make a loop with condition:  
 * 
 * while(<condition>)
 *    <code>
 *    <iterating>
 *
 * How it works is simply check condition. true = end false = run.
 *
 * Also, while loops are much more flexible we can work with strings too.
 * An example of that will be:
 * 
 * char a;
 * while(a != 'a')
 * {
 *      cout << "PeePeePooPoo\n";
 * }
 * 
 * Well this would create an infinite loop cuz theres no way to end it.
 *
 * Next: "Do-WhileLoops";
 *
 */