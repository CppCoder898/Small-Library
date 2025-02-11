#include<iostream>
using namespace std;

void printInfo(const int age, const string name);

int main()
{

    printInfo(41, "OldMan");

    return 0;
}

void printInfo(const int age, const string name)
{

    //age = 21; //error
    //name = "KomodoDragon"; //error

    cout << "Age: " << age << '\n';
    cout << "Name: " << name;

}

/*
 *
 * In-notes
 * --------
 *
 * In short they are like normal const but while sending arguemnts.
 * These make your program safer, and tell other devloper to not mess with them.
 *
 * Or we can say "DONT YOU DARE TOUCH THAT GOOFBALL";
 *
 * Next: "FunctionTemplate";
 *
 */
