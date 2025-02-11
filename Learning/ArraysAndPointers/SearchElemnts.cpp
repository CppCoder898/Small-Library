#include<iostream>
using namespace std;

int searchArray(int arr[], int myNum);

int main()
{

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int myNum;

    cout << "Enter search: ";
    cin >> myNum;

    int index = searchArray(arr, myNum);

    if(index != -1) 
    {
        cout << "Your number is at index: " << index;
    }
    else{
        cout << "Your number was not found :(";
    }

    return 0;
}

int searchArray(int arr[], int myNum)
{

    for(int i = 0; i < 10; ++i)
    {

        if(myNum == arr[i])
        { 
            return i;
        } 

    }

    return -1; //-1 means something not found in Programing!

}

/*
 *
 * In-notes
 * --------
 *
 * This is kinda a practice program, but still some practice is important.
 *
 * The function checks if array at any index is same as myNum,
 * If it is, it returns index.
 *
 * If no it return -1, meaning not found.
 *
 * Next: "Fill";  Fill what lol, my name are kinda weird. :P
 *
 * Suggested: Make a sort array program where array will be sorted in accending order.
 *
 */

