#include<iostream>
using namespace std;

int main()
{

    int age = 13;
    bool student = true;
    string name = "Islam";

    cout << &age << '\n';
    cout << &student << '\n';
    cout << &name << '\n';

    return 0;
}

/* 
 *
 * In-notes
 * --------
 *
 * So a memory adress is where they are located in memory and they have a adress.
 * And with & you can use them!
 * through memory adress we can acces them too, they are really useful.
 * 
 * If you convert the adress to decimals heres the result for mine adresses (yours mabye different):
 *
 * 0x22ff28 - 2293544
 * 0x22ff27 - 2293543
 * 0x22ff0c - 2293516
 *
 * If you notice at last digits thiers gap of 1 for the bool,
 * and then has a gap of 27 and stirng takes 24 idk where did the 3 came from but...
 * that's how they work.
 *
 *
 *
 * ||||||||||||||||||||||||||||||||||||||||||||||||||||||| imagine this a line of memory
 *     ^ ^ ^ These are there adresses
 *           arrays store them completly in oder.
 *
 * Next: "Pointers"; Finally :)))))))
 *
 */