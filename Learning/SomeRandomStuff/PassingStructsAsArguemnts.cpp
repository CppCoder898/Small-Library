#include<iostream>
using namespace std;

struct student
{
    string name;
    double gpa;
    bool enrolled;
};

void printStudentInfo(student student);

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

    printStudentInfo(student1);
    printStudentInfo(student2);

    return 0;
}

void printStudentInfo(student student)
{

    cout << student.name << '\n';
    cout << student.gpa << '\n';
    cout << student.enrolled << '\n';

}

/*
 *
 * In-notes
 * --------
 *
 * Yes, i copy pasted it completly.
 *
 * Anyway, thats how you send them too other functions!
 * Since we are basically a new data type we use the same data type to send them.
 *
 * Next: OOP > "ClassesAndObjects"; CONGRATS YOU'VE FINALLY MADE IT TO OOP!!!
 * Practice Program: "CreditCardValidator"; UHHH
 *
 */