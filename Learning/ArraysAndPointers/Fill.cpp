#include<iostream>
using namespace std;

int main()
{

    string fillSomething[100];

    fill(fillSomething, fillSomething + 25, "Anything");
    fill(fillSomething + 25, fillSomething + 50, "Something");
    fill(fillSomething + 50, fillSomething + 75, "Something!");
    fill(fillSomething + 75, fillSomething + 100, "Anything!");

    for(int i = 0; i < 100; ++i)
    {
        cout << fillSomething[i] << '\n';
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *   
 * Basically fill just fills a data set with the value given.
 * 
 * fill(start, end, value);
 * Thats how it works.
 *
 * Give it a starting adress and ending adress then value and done!
 * This is usefull if you wanna fill an array with some value in a HUGE amount!
 *
 * Next: "2DArrays"; IK you're suprised. ;D
 *
 */
