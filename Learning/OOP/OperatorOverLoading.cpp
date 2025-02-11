#include<iostream>
using namespace std;

class Fraction
{

    public:
        int num;    //Common factors of a fraction.
        int den;

    Fraction(int num, int den) //Constructor (idk why I am adding this comment lol)
    {
        this->num = num;
        this->den = den;
    }

    void display() //show fraction
    {
        cout << num << " / " << den << '\n';
    }

    int simplify(int &a, int &b)    
    {
        int maxValue = (a > b) ? (b / 2) : (a / 2); //den vs num, so we can get highest value.

        while(maxValue > 1) 
        {
            if(a % maxValue == 0 && b % maxValue == 0) 
            {
                a /= maxValue; //If a number is found to simply both, do it and end function.
                b /= maxValue;
                return 1;
            }
            else --maxValue; //If nothing found subtract value to get new results.
        }
        return -1;  //If simplfying fails, just end.
    }

    Fraction operator+(Fraction f) 
    {
        if(f.den == den) //If dens are same just directly add the fraction.
        {
            int newDen = den;
            int newNum = f.num + num;
            Fraction ans(newNum, newDen);
            return ans;
        }

        int newDen = den*f.den;             //This might not be always correct but does work so yea.
        int newNum = num*f.den + f.num*den;

        simplify(newDen, newNum);

        Fraction ans(newNum, newDen);
        return ans;
    }

};

int main()
{

    Fraction f1(5, 7);
    f1.display();
    Fraction f2(3, 7);
    f2.display();
    Fraction f3(8, 13);
    f3.display();       //Try making your own fraction here!

    Fraction f4 = f1 + f2;
    f4.display();  

    Fraction f5 = f4 + f3;
    f5.display();

    return 0;
}

/*
 * In-notes
 * --------
 * 
 * Not much new stuff but is cool.
 * 
 * The 'operator+' function is a function which will not be used like "f.operator+()", but it will be
 * automatically called when '+' with object is used.
 * 
 * Example: object3 = object2 + object1;
 * Example2: cout << object3 + object2 << '\n';
 * 
 * You can also make "operator-" or "operator*" basically you can use any operator.
 * You can also use operators like |, <, >=, &, etc. And give them a custom use!
 * 
 * Example: object3 = object1 - object2;
 * Example2: cout << object3 * object1 << '\n';
 *
 * This was the example of fractions operations, it could be differnt.
 * Now we have learnt Compile Time Polymorphisim, so now time for Run-time Polymorphisim
 * 
 * Next: "Overriding"; sounds weird lol.
 * 
 */