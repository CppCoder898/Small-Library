#include<iostream>
using namespace std;

int main()
{

    for(int i = 0; i < 100; i++) 
    {
        if(i == 10) {break;}
        if(i == 5) {continue;}

        cout << i << " ";
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * break = end loop;
 * continue = skip this;
 *
 * They are very simple, yet very important.
 *
 * Next: "NestedLoops";
 *
 */
