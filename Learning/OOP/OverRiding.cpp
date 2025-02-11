#include<iostream>
using namespace std;

class Scooty
{
    public: 
        virtual void sound() {
            cout << "Vroom Vroom" << '\n';  // Try removign 'virtual'
        }
};

class Bike : public Scooty
{
    public:
        void sound() {
            cout << "dhroom dhroom" << '\n'; //dhroom!
        }
};

class SuperBike : public Scooty
{
    public:
        void sound() {
            cout << "Zroom Zroom" << '\n'; //Zroom!
        }
};

void playSound(Scooty* object)
{
    object->sound();
}

int main()
{

    Scooty* s1 = new Scooty();
    Scooty* b1 = new Bike();        
    Scooty* sb1 = new SuperBike();

    playSound(b1);
    playSound(sb1);
    playSound(s1);

    return 0;
}

/*
 * In-notes
 * --------
 * 
 * I know what's on your mind, "WTH EVEN IS THIS AND WHY IS!?"; 
 * Well, am I wrong? Well maybe I am but let's get to point instead of yapping.
 * 
 * If you remove 'virtual', and try the playSound(); you will see that it says "Vrooom Vroom";
 *
 * virtual allows dynamic binding, meaning playSound() calls the correct function based on the actual object,
 * not just the pointer type.
 * 
 * Well, why does this matter? Let's try out a different example.
 * 
 * **********************************************************************************
 * 
 * #include<iostream>
 * using namespace std;
 * 
 * class Animal{
 *      public:
 *          virtual void sound() {
 *              cout << "*animal noises*\n";
 *          }
 * };
 * 
 * class Dog : public Animal{
 *      public:
 *          void sound() {
 *              cout << "*IshowSpeedNoises*\n"; //iykyk >:)
 *          }
 * };
 * 
 * class Cat : public Animal{
 *      public:
 *          void sound(){
 *              cout << "Meow Meow\n";
 *          }
 * };
 * 
 * int main(){
 * 
 *  Animal* arr[3];
 *
 *  arr[0] = new Cat();
 *  arr[1] = new Dog();
 *  arr[2] = new Animal();
 *
 *  for(int i = 0; i < 3; i++)
 *  {
 *      arr[i]->sound();
 *  }
 *
 *  for(int i = 0; i < 3; i++)
 *  {
 *      delete arr[i];
 *  }
 * 
 *   return 0;
 * }
 * 
 * ***********************************************************************************
 * 
 * When working with data-structures it could be helpful, just like I showed it in the example.
 * 
 * If this feels unclear, check out: https://www.geeksforgeeks.org/virtual-function-cpp/ 
 * Or you can try any other source.
 * 
 * Well, that's an example for runtime polymorphisim, the difference is really just same like heap vs stack memory. (kinda?)
 * 
 * Practice Program: "MyVector"; No text here cuz me have no idea lol >:D
 * Next? 
 * 
 * CONGRATULATIONS!!! YOU HAVE FINALLY COMPLETED OOP!
 * As for your progress I dont really have anything but,
 * 
 * ____ 
 * |     |
 * |     |
 * |     |
 * |     |_________________________
 * |                             |             |
 * |                                     ------|
 * |                                           |
 * |                                     ------|          <3 𝓖𝓞𝓞𝓓 𝓛𝓤𝓒𝓚! >:D
 * |                                           |
 * |                                      -----|
 * |____________________________ |
 * 
 * 
 * I would recommend learning DSA and STL but make sure you learn OOP and basics correctly.
 * I still don't know why I maked a special folder for 3 extra files like wut.
 * 
 * (Future note editor: Idk if the ascii art got ruined cuz whenever I copy paste it get DEMOLISHED)
 * 
 */