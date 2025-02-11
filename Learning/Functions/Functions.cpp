#include<iostream>
using namespace std;

void example1()
{
    cout << "Student card\n";
}
void example2(int age, string name);

int main()
{

    string name = "Coder";
    int age = 13;

    example1();
    example2(age, name);

    return 0;
}

void example2(int age, string name)
{
    cout << "Name: " << name << '\n';
    cout << "age: " << age;
}

/*
 *
 * In-notes
 * --------
 *
 * First we will talk about what even is a function.
 *
 * Functions are a block of code that can be used as many time you want.
 * The code works exactly normal.
 *
 * The int main is also a function but a main function where code is excuted.
 * Function are also seen as calls,
 * like main function calls other function think of () as two phones calling each other.
 * You can also jsut declare them and define later.
 * 
 * When you pass something to a function it's known as "Arguements";
 * If this feels unclear, you might want to watch a video.
 *
 * Next: "ReturnTypes";
 *
 */