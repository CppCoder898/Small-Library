#include<iostream>
using namespace std;

int main()
{

    int* ptr = new int;
    *ptr = 44;

    cout << *ptr << " - " << ptr << '\n';
    cout << "*******************************" << endl;

    string* pGrades = NULL;
    int size;

    cout << "Enter array size: ";
    cin >> size;

    pGrades = new string[size];

    for(int i = 0; i < size; ++i)
    {
        cout << "Enter grade[" << i << "]: ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; ++i)
    {
        cout << pGrades[i] << " ";
    }
    cout << '\n';

    delete ptr;
    delete[] pGrades;

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * When we use 'new <data_type>' we use heap memory rather than stack memory.
 * "What's heap and stack?";
 * 
 * stack memory is basically all compiled which stores in a block.
 * While heap memory is just mess and runs after program is already running and compiled.
 * 
 * Stack memory is overall faster but, heap memory is more flexible with user-input.
 * Also make sure to delete them as, they can cause crash, undefined behaviour, etc.
 * 
 * You'd use new, if you want to delete a object by yourself.
 * Like a username as example.
 * 
 * If this feels unclear, you can  watch video or use other sources!
 * 
 * My fav as always: https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
 *
 * Next: SomeRandomStuff > "ConstParameters"; Congrats for completing this chapter!
 * Practice program: "Tic-Tac-Toe" My fav game!
 *
 */