#include<iostream>
using namespace std;

class Student
{

    public:
        string name;
        int age;
        int marks;

    Student(string name, int age, int marks)
    {
        this->name = name;
        this->age = age;
        this->marks = marks;
    }


};

void printObject(Student *dPST0);  //dpST0 = Dynamic Pointer Student 0 (kinda wierd)

int main()
{

    Student  student1("GAMERSGAMEYT708", 13, 69); //normal
    Student* dpST = new Student("MrHippoxD", 12, 0); //pointer, btw that's my friends gamer tag lol

    cout << "Name: " << student1.name << '\n';
    cout << "Age: " << student1.age << '\n';
    cout << "Marks: " << student1.marks << '\n';

    printObject(dpST);

    return 0;
}

void printObject(Student *dPST0)
{
    cout << "Name: " << dPST0->name << '\n';
    cout << "Age: " << dPST0->age << '\n';
    cout << "Marks: " << dPST0->marks << '\n';
}

/*
 * In-notes
 * --------
 * 
 * This is a dynamic object pointer.
 * Basically it takes memory in heap,
 * or run in runtime rather than compile time.
 * 
 * When we start working with linked-lists
 * It's gonna be really useful
 *
 * dpST = PTSD
 * 
 * I have explained already so ima not go in veryyy depth.
 * 
 * Next: "CompileTimePolymorphisim"; Idk why i first maded a folder for this.
 * 
 */