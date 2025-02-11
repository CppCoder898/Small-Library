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

void studentBirthday(Student* pST0); // wait for cool magic

int main()
{

    Student student1("jacob", 16, 66); //jacobs is a good boy ;)
    Student *pST = &student1; //Main object pointer it has all control

    (*pST).marks = 100; // this action is like: student1.marks = 100;
    (*pST).name = "Jacob"; //captalized 'j' XD, but cover *<PTname> in paranthesis

    studentBirthday(&student1);

    cout << "Name: " << (*pST).name << '\n';
    cout << "Age: " << (*pST).age << '\n';
    cout << "Marks: " << (*pST).marks << '\n';

    return 0;
}

void studentBirthday(Student *pST0)
{
    //Un-comment any of these and try, both are same.
    //Its the birthday effect!

    //(*pST0).age += 1;
    //pST0->age += 1;
    
}

/*
 * In-notes
 * ---------
 * 
 * So lets go 1 by 1.
 * Object pointer is just as like a normal poiner.
 * 
 * When we do any action like (*pST).age or pST->age is just same student1.age
 * What happens here is it goes to the memory adress and print what there is
 * 
 * The pST contains student1's adress, so when we use it
 * We just print or change whatever is at that adress, or the memory adress.
 * 
 * We know that when we create a variable it takes some memory and that memory has a address
 * like: a00002bQ78fc
 * 
 * So going into adress and doing it or just doing it is same.
 * 
 * Now let me clear the 'changeObject' function.
 * 
 * So when we call it we don't gave variable we give address
 * 
 * The address is same, even if you send it through function.
 * The pointer takes address and just does the work.
 * 
 * Next: "DynamicObjectPointer"; Same as dynamic pointer lol.
 * 
 */