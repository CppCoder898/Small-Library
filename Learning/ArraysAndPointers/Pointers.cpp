#include<iostream>
using namespace std;

int main()
{

    int age = 13;
    string name = "Islam";
    string myFaviourateFoods[] = {"Biryani","Maggie","Pani-Puri"};

    int *pAge = &age;
    string *pName = &name;
    string *pFoods = myFaviourateFoods; //no & since array names direcly are adress 

    cout << *pAge << " - " << pAge << '\n';
    cout << *pName << " - " << pName << '\n';
    cout << *pFoods << " - " << pFoods << '\n';

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * Pointer can hold memory adresses!
 * And with a derefrence opertaor '*' we can print whatever's at adress.
 * Sometimes adress can be useful since it will be eaisier to work with poiter rather than variable.
 *
 * If you print a pointer it will just give the adress.
 * You can have a pointer of pointer too! Cuz, it takes some memory and has an adress as well.
 *
 * Next: "NullPointer";
 *
 */