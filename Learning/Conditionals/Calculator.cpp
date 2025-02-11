#include<iostream>
using namespace std;

int main()
{

    int x, y;
    char z;

    cout << "Enter expression: ";
    cin >> x >> z >> y;

    switch(z)
    {
        case '+':
          cout << "Result: " << x+y;
          break;

        case '-':
          cout << "Result: " << x-y;
          break;

        case '*':
          cout << "Result: " << x*y;
          break;

        case '/':
          cout << "Result: " << x/y;
          break;

        default:
          cout << "Plz enter a valid expression <num> <opt> <num>";
          break;
    }

    return 0;
}

/*
 * In-notes?
 * --------
 * 
 * I think yk how it works.
 * Unless you just came here to check "Oh a calculator?!";
 * 
 * Anyway this is simple logic if you don't know how this works, you're stupi- jk.
 * 
 * LEARN EVERYTHING (in this chapter) AGAIN.
 * Or well learn switches lol.
 * 
 */