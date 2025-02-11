#include<iostream>
using namespace std;

int main()
{

    int r, c;

    cout << "Enter rows and colums: ";
    cin >> r >> c;

    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            cout << "* ";
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
 * Man, i am reall tired of branding these in-notes, btw thats patter printing you can learn that if you want to.
 * Well its just a loop in a loop.
 *
 * First loop works then jumps to second ,
 * checks condition, true = end false = run.
 * Then the second loops end and then cout << '\n';
 * Then first loops condition gets check again true = end false = run.
 * Then the nested loop works again untill main one ends, you can also create triplle nested loops as well.
 * 
 * Congrats this is the end!
 *
 * Next: Functions > "Functions"; I need to get better naming files.
 * Practice program: "NumberGame";
 *
 * If you notice at line 34-36 they all start with "Then" lol.
 *
 */