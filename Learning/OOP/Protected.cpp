#include<iostream>
using namespace std;

class Base
{

    public:
        int a;   //public

    protected:
        int b = 2;  //protected

    private:
        int x = 24;

};

class Derived : protected Base
{

    public:
        int c = 1973; //just to fill cuz i dont want it to be empty hahahah

        int getB() //getter
        {
            return b;
        }

};

int main()
{

    Derived derived;

    //cout << derived.a << '\n';
    cout << derived.getB() << '\n';
    cout << derived.c;

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * So let's take a look at this chat first:
 * 
 * *************************************************************************************************
 * 
 * members              Public derivation       Private derivation      Protected derivation
 * 
 * 1.Private ->         Not inherited           Not inherited           Not inherited
 * 2.Protected ->       Protected               Protected               Protected
 * 3.Public - >         Public                  Private                 Protected
 * 
 * ***************************************************************************************************
 * 
 * Private members cannot be inherited.
 * Protected members are protected always
 * Public one depends
 * 
 * If you inherit as public it's public, meaning you can access easily.
 * If you inherit as private it's private, meaning you can't access it.
 * If you inherit as protected it's protected, meaning only class and child can access it. (getter and setter)
 * 
 * public become the way its inehrited.
 * You cant access members directly if it is inherited with ptotection.
 * That's why you need getter and setter.
 * 
 * 
 * The more you deep dive the more you understand.
 * Watch this video for furhter explaintion: https://youtu.be/uHkIhwUspdI?si=RtPy71evu1rpfKmh (hindi)
 * And this for english: https://www.geeksforgeeks.org/access-modifiers-in-c/#:~:text=Access%20Modifiers%20or%20Access%20Specifiers,accessed%20by%20the%20outside%20functions.
 * 
 * The Public, Private, Protected are access spefiers that limit their access.
 * And prevent memory leaks and stuff.
 * 
 * Next: "MultiLevelInheritance"; TOO MUCH LONG name.
 * 
 */