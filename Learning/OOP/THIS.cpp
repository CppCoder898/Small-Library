#include<iostream>
using namespace std;

class Student
{
    public:
        int age;
        string name;
        double gpa;

    Student(int age, string name, double gpa) 
    {
        //Mainly used when arguements and members are same.
        this-> age = age;
        this-> name = name;
        this-> gpa = gpa;
    }
};

void printObject(Student student0);

int main()
{
    Student student1(15, "BOB THE BUILDER", 0.1); 

    printObject(student1);

    return 0;
}

void printObject(Student student0)
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
 * this-> age = age;
 * 
 * Here, the 'this-> age' is talking about object's age.
 * They are only useful if arguments and members are same.
 * 
 * But personally, I love keeping them same and using 'this->'.
 * 
 * Any way, it's your choice to use it or not.
 * Also, yes i copied whole code again :D lol.
 * 
 * Next: "ConstructorsOverLoading"; House is gonna build fast! too many constructors! 
 * 
 */