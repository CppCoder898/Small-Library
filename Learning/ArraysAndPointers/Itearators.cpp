#include<iostream>
using namespace std;

int main()
{

    int arr[] = {0,1,2,3,4};

    for(int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * So what happen here is, we use i as a number the i has a value when the loop complete a round and we use same 
 * value to print the index so: 1. arr[i] -> arr[0] 2. arr[i] -> arr[1] 3. arr[i] -> arr[2] 4. arr[i] -> arr[3] 5. arr[i] -> arr[4]
 *
 * That's how it works.
 * I wanted you to know this cuz, this gonna be super useful.
 *
 * Next: "SizeOf"; Size of what? :P
 *
 */