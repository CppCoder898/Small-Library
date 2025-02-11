#include<iostream>
using namespace std;

int main()
{

    int x = 5;
    double y = 10.0;
    string z = "Code!";
    char arr[] = {'A', 'B', 'C', 'D'};

    cout << sizeof(x) << " Bytes " << sizeof(y) << " Bytes " << sizeof(z) << " Bytes\n";
    //Thier memory adress size we will discuss about this in pointer

    cout << sizeof(arr)/sizeof(arr[0]) << " Elemnts in the array!";

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * Every data type has it own size in bytes:
 *
 * int - 4 bytes
 * double/float - 8 bytes
 * char - 1 bytes
 * string - 24 bytes
 * bool - 1 bytes
 *
 * Using this we can get size of arrays here char is char arr so we can get size by: sizeof(arr)
 * But, this wont work with other data type, so divide with the size of data type, likr: arr[0] or just use data type name.
 *
 * This is usefull if you make any changes to your main array,
 * we can still itearate easily! just make a varible or write in loop: for(int i = 0; i < sizeof(arr)/sizeof(arr[0]; ++i))
 * or you could use a varible as well.
 *
 * Other easy way of this is "ForeachLoop" ik loops shoudn't be here but ya.
 *
 * Next: "ForeachLoop"; We'll learn it RN!
 *
 */