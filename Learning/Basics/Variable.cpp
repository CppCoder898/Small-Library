#include<iostream>
using namespace std;

int main()
{

    int a = 1;      
    double b = 2.2; 
    char c = 'c';
    string d = "Code!\n"; //(needs std::)

    cout << a << b << c << " " << d;

    return 0;
}

/*
 *
 * In-notes
 * ---------
 *
 * int = (stands for integer) can store whole numbers.
 * double = can store almost any number including decimals.
 * char = (stands for character) can store almost any single chracter .
 * string = can store a list of characters.
 *
 * To use a variable define it with data type, (e.g. int, char, string)
 * with a name and assign them, however, there are a few rules to name varaibles.
 * You can also just define them and assign them later.
 *
 * Variable naming rules
 * ---------------------
 * 
 * 1.They can't start with a keyword like return, double and cout.
 * 2.They can't start with a  special character or have in thier name, like @,!,#, etc. (execpt for '$' and '_')
 * 3.They can't start with numbers like 1234.
 * 4.They cant have spaces in their name.
 *
 * Next: "AssigningVariables" :]
 *
 */