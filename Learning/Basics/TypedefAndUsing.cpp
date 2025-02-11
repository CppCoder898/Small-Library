#include<iostream>
using namespace std;

typedef int num;
using str = string;

int main()
{

    num a = 15;
    str b = "Aliases!";

    cout << a << endl;
    cout << b;

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * to use typedef write "typedef <datatype> <new name>"
 * Example: typedef double d;
 * to use using as Aliases write using <new name> = <datatype>
 * Example: using num = int;
 *
 * This is actually called: "Aliases";
 *
 * Kind of like nicknames for varaibles!
 *
 * Next: "Input"; You're almost finished with basics yipe!
 *
 */
