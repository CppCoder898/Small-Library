#include<iostream>
using namespace std;

int main()
{

    int x = 22;
    int *pX = nullptr;  //You can also use NULL.

    pX = &x;

    if(pX == nullptr)
    {
        cout << "Pointer is not assinged!\n";
    }
    else{
        cout << "Pointer is assigned!\n";
        cout << *pX << " - " << pX;
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * It's always a good practice to check if a pointer is assigned.
 * nullptr can be dangerous!
 *
 * nullptr are just pointer that are pointing to nothing when you print them
 * it can cause: crash, undefined behaviour, segmentation fault, etc.
 *
 * So its good to check.
 *
 * anyway nullptr are just like int x;
 * they have no value.
 *
 * Next: "DyanamicMemory";
 *
 */