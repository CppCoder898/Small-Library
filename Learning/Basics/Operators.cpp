#include<iostream>
using namespace std;

int main()
{

    //Operators are: +, -, /, etc.

    int a = 2+2;
    int b = 2-1;
    int c = 2*2;
    int d = 2/2;
    int e = 2%2;

    cout << "A: " << a << " B: " << b << " C: " << c << " D: " << d << " E: " << e << endl;
    cout << 10+10 << " " << 10-10 << " " << 10*10 << " " << 10/10 << " " << 10%10;

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * + = addition (plus)
 * - = subtraction (minus)
 * * = multiplication (asterisk)
 * / = division (slash)
 * % = remainder of division (modulus)
 * 
 * If you are updating a variables value, you would use += 
 * First you would use the operator you like, and then '=', "a += 21;"
 * Or you can update it like "a = a + 21;"
 *
 * Next: "PreVsPostIncrement"; 9 + 10 = 21!
 *
 */