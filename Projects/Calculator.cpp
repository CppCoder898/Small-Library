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

//It's a practice program, you should know how it works chapter has ended!