#include<iostream>
using namespace std;

int main()
{

    string cars[5] = {"Toyota", "Honda", "Ferari", "Lamborghini", "BMW"};
    string food[] = {"Biryani", "Pancakes", "Noodless", "Kebab", "Whats today to eat?"};

    cout << cars << '\n';
    cout << cars[0] << '\n';
    cout << food[4];

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * What's an array?
 *
 * An array is a container that can hold multiple varaibles.
 *
 *  ______________________________________________________________________________________________
 * |                  |                  |                  |                  |                  |
 * |                  |                  |                  |                  |                  |
 * |                  |                  |                  |                  |                  |
 * |       0          |        1         |        2         |        3         |        4         |
 * |                  |                  |                  |                  |                  |
 * |    "Toyota"      |     "Honda"      |     "Ferari"     |  "Lamborghini"   |      "BMW"       |
 * |__________________|__________________|__________________|__________________|__________________|
 *
 *
 * Thats a digram of an array, each block has its own index and value.
 * 
 * If you print a array it will give it memory adress like: 0xa0pths9.
 * 
 * So you gotta give it a index "cars[<num>]" and it starts from 0 cuz, computer starts from 0 as well.
 *
 * You can give it a size while declaring or not your chioce like "cars[5];" or "food[] = {"abra","kadabra"};""
 *
 * You can also update an index, example: "cars[1] = CarIsLove;"
 *
 * Also, you cant declare a array like: food[]; If you're declaring it like this, it needs a size.
 * And you cant change thier size.
 *
 * Next: "Iterators";
 *
 */