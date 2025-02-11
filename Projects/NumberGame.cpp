#include<iostream>
#include<ctime>             //<- Depends on compiler, or sometimes may not need to use.
using namespace std;

int main()
{

    srand(time(NULL)); //Important to genrate random number.

    int x = rand() % 100 + 1;
    int input;
    char Cinput;

    while(true)       //A condition to make an infinete loop, or end with only break.
    {
        cout << "Enter guess: ";
        cin >> input;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Plz enter a valid number\n";
        }

        if(input < x) {cout << "Low!\n";}
        else if(input > x) {cout << "High!\n";}
        else 
        {
            cout << "Congratulation you won!\n";
            cout << "Would you like to play again?[y/n]: ";
            cin >> Cinput;

            if(Cinput != 'y') {break;}
            else{continue;}
        }
    }


    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * This is the first Practice program to have something new and in-notes,
 * Multiple things to consider so lets go 1 by 1.
 *
 * CTIME a new library these are actually called libraries or headers.
 * this basically adds a lot of time function check them here: https://cplusplus.com/reference/ctime/
 *
 * srand(time(NULL)) so srand is to genrate random numbers and time is to tell how much time 
 * null meaning none null, is basically 0.
 *
 * rand() is a built in funtion like, pow(), max(), etc.
 *
 * % 100 + 1; is to make it genrate to only 1-100.
 *
 * if(cin.fail()) Is to cath cin error, if someinputs a chracter rather than number then this will cath it.
 * cin.clear() To clear it and fix it,
 * cin.ignore() ignore the previous thing and clear the buffer.
 *
 * +nested if else: go to line 28 you will find theirs a if and else in a else block.
 *
 * Also, fun fact: do you know why we use i as iterators? its because iterators starts with i, and when we use a nested loop we use j cuz its right after i this is like a coding culture!
 *
 * Also, i would suggest you to make a program with true loop.
 *
 * THE END
 *
 * Suggested: Make a shop program, where the shop will run until user leaves, or runs out of money.
 *
 */ 