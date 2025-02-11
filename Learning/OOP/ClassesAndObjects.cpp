#include<iostream>
using namespace std;

class Student //kinda like struct
{

    public: //access modifier
        int age;
        string name;    //members
        double gpa;

    void printMaBoi() //You can make function here too!
    {
        cout << "Age: " << age << '\n';
        cout << "Name: " << name << '\n';
        cout << "GPA: " << gpa << '\n';
    }

};

int main()
{

    Student student1;
    student1.age = 16;
    student1.name = "Jackob";
    student1.gpa = 5.5;

    student1.printMaBoi();

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * So, finally we made it to OOP.
 * What is OOP? Object-Oriented Programing.
 * 
 * I don't like 2 parts, so I'm gonna explain everything in comments.
 * 
 * Class = Blue print of an object.
 * Object = An entity, or just an object.
 * 
 * An object can have a lot of attributes or "Members";
 * Take human as example, it can have: gender, profession, salary, alive status, name, age, etc.
 * Just like before, they can be accessed with "Class member access operator";
 * 
 * They are just like structs, but they can have functions!
 * 
 * You can also send objects to functions, just like how we send structs but make sure to put an '&' to pass it by refrence.
 * 
 * What is "public:"?
 * An access modifier we will learn about this later, just make sure to add for now.
 * 
 * Plz make sure to try this by yourself, or...
 * Also it's a good practice to make the object start with capital letter.
 * 
 * Next: "Constructors"; We are gonna build houses!
 * 
 */