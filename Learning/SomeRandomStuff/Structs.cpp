#include<iostream>
using namespace std;

struct student
{
    string name;
    double gpa;
    bool enrolled;
};

int main()
{

    student student1;
    student1.name = "Dekisugi";
    student1.gpa = 3.5;
    student1.enrolled = true;

    student student2;
    student2.name = "Nobita";
    student2.gpa = 0.5;
    student2.enrolled = false;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * structs are like a object they have thier own varaible but not like arrays.
 * The variables are known as members.
 *
 * The members can be accessed with "Class member access operator" '.';
 *
 * Basically it's a set that can hold multiple data type but not like arrays.
 *
 * Next: "PassingStructsAsArguemnts";
 *
 */