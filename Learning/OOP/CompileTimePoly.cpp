#include<iostream>
using namespace std;

class Expressions
{

    public:
        void sum(int a, int b)
        {
            cout << a+b << '\n';
        }
        void sum(int a, int b, int c)
        {
            cout << a+b+c << '\n';
        }
        void sum(double a, double b)
        {
            cout << a+b << '\n';
        }
        // int sum(int a, int b)
        // {
        //     return a+b;  //error
        // }

};

int main()
{

    Expressions exp1;

    exp1.sum(57,76);

    return 0;
}

/*
 * In-notes
 * --------
 * 
 * To understand this, we first need to understand, what even is polymorphisim.
 * 
 * Polymorphisim is a object different forms, that's what I tried to represent with function over loading.
 * 
 * for another example:
 * 
 *                             Child
 *                              /|\
 *                               |
 *         Mother/Father <-   [PERSON]  -> Brother/Sister
 *                               |
 *                              \|/
 *                             Friend
 * 
 * That's the most common example btw.
 * 
 * Now polymorphisim it self has 2 types.
 * 1.Compile time
 * 2.Run Time
 * 
 * Currently, we're learning compile time.
 * Compile time polymorphisim can be achived by - Function overloading | Operator overloading
 * 
 * This was function overloading example. (which we have already talked about before lol)
 * 
 * Next: "OperatorOverLoading";
 * 
 * After, we will learn run time poly and differences. (The note advancer from future: Nope this not gonna happen)
 * 
 */
