#include<iostream>
using namespace std;

class Student
{

    public:
        int age;
        string name;
        double gpa;

    Student() //default
    {

    };
    Student(int a, string n, double g) //Parameterized
    {
        age = a;
        name = n;
        gpa = g;
    }

};

void printObject(Student &student0);

int main()
{

    Student student1(15, "BOB THE BUILDER", 0.1); //That gpa💀
    Student student2;

    student2.age = 15;
    student2.name = "Marina";
    student2.gpa = 7.8; //I never had this much gpa, is it possible?

    printObject(student1);
    cout << '\n';
    printObject(student2);

    return 0;
}

void printObject(Student &student0) //idk why I am sending with refrence.
{

    cout << "Name: " << student0.name << '\n';
    cout << "age: " << student0.age << '\n';
    cout << "gpa: " << student0.gpa << '\n';

}

/*
 *
 * In-notes
 * --------
 * 
 * What are constructors?
 * They are to make initialization easier for objects.
 * 
 * Also, yes I copied the code, lol.
 * 2 Types of constructors.
 * 
 * 1.Default
 * This guy is there if you don't make a new constructor.
 * This guy is for: student1.blah = "bruh"; type initialization.
 * But if you make a new one this one goes so you have to make it like:
 * 
 * Student() {
 * 
 * }
 * or it won't work.
 * 
 * 2.Parameterized
 * This guy isn't always there you have to call him.
 * It takes the values, just like how normal function does.
 * When we say name = n; the name we are talking about is object's name. this is important.
 * 
 * The constructor doesn't have a return type, and has same name as class.
 * 
 * Next: "THIS"; looks like it's about THIS.
 * 
 */