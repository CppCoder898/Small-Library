#include<iostream>
using namespace std;

class Animal //parent class
{
    public:
        bool alive = true;
        
        void eatFood()
        {
            cout << "NOM NOM NOM\n"; //inherited attributes (private attributes wont be)
        }
};

//child class
class Dog : public Animal{ //inheritance

    public:

        void bark()
        {
            cout << "*Bark*\n"; //personal attributes
        }

};

int main()
{

    Dog dog;

    dog.eatFood();
    dog.bark();
    cout << dog.alive; //1 = true 0 = false

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * inhertance is just like its name.
 * 
 * It let class inhertitate from it. (why does this sound really weird?)
 * 
 * Basically if a lot of class has same attributes, you can just make one.
 * And inherit them.
 * And remeber private attributes can never be inherited.
 * 
 * Next: "Protected"; Dog: NOM NOM NOM!
 * 
 */