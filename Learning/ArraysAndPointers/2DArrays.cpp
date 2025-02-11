#include<iostream>
using namespace std;

int main()
{

    string cars[][3] = {{"Mustang","Esxape","F-150"},
                       {"corvette","Eqinox","Silverdo"},
                       {"Chalengger","Drango","Ram-1500"}};

    cout << cars[0][0] << '\n';
    cout << cars[2][2] << '\n';

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << cars[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * 2D arrays are just like thier name.
 * Heres a digram to imagine how they look like:
 *
 *      Rows = i = cars[]
 *
 *      ____________________________________________________________________________
 *      |                  |                  |                  |                  |
 * 1)   |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 *      |       0          |        1         |        2         |        3         |    Colums = j = cars[][];
 *      |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 *      |__________________|__________________|__________________|__________________|
 *      |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 * 2)   |       0          |        1         |        2         |        3         |    
 *      |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 *      |__________________|__________________|__________________|__________________|
 *      |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 * 3)   |       0          |        1         |        2         |        3         |    
 *      |                  |                  |                  |                  |
 *      |                  |                  |                  |                  |
 *      |__________________|__________________|__________________|__________________|
 *
 *
 * The rows are outside and colums are inside.
 * Colums are important to declare anyway.
 *
 * You can declare them like this too cars[3][3];
 * Then give value to each spot
 *
 * And you can update them like this as well: cars[0][0] = "InsertSomething?";
 *
 * There is a way to get colum and row size heres the example:
 *
 * int rSize = sizeof(cars)/sizeof(cars[0]);
 * int cSize = sizeof(cars[0])/sizeof(cars[0][0]);
 *
 * Now the things i told you in the in-notes also remebr to try them yourself, okay?
 *
 * Next: "MemoryAdresses"; We are finally going to learn pointer after a bit time tho.
 *
 */
