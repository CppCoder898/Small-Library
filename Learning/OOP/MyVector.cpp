#include<iostream>
using namespace std;

class Vector
{

    public:
        int size;
        int capacity;
        int *arr;

    Vector() {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int element)
    {
        if(size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for(int i = 0; i < size; ++i) {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = element;
    }

    int getIndex(int ind)
    {
        if(size == 0) {cout << "Array is empty\n"; return -1;}
        if(ind >= size || ind < 0) {cout << "Invalid index\n"; return -1;}

        return arr[ind];
    }

    void remove()
    {
        if(size == 0) {cout << "Array is empty\n"; return;}
        size--;
    }

    void print()
    {
        for(int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main()
{

    Vector v1;

    v1.add(8);
    v1.add(78);
    v1.add(707); //read it upside down :)

    v1.print(); //too lazy to add more print and cout size and capacity.

    v1.getIndex(3);
    v1.getIndex(-1);

    v1.remove();
    v1.print();

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * Well as always Practice-program dosent have any in-notes
 * BUT I still wanna explain lol.
 * 
 * 1st of all, if you dont know what a vector is, it's basically a array
 * that can be extended aka "Dynamic array";
 * 
 * Size = the AMOUNT OF ELEMENTS in array.
 * Capacity = How many ELEMENTS IT CAN HOLD.
 * 
 * When size is equal to capacity, it doubles capacity.
 * Then it makes a new array with new capacity.
 * After, it copy pastes all elements.
 * Then it makes arr's address to arr2's address so when we use arr we basically use arr2;
 * 
 * Then it just adds the element.
 * 
 * And if you are confused for the remove() function:
 * 
 * Size--;
 * Elemnt still in array
 * but program sees size = the amount of element in array.
 * 
 * when we add a new elemnt, it REPLACES the previous element.
 * and when we perform any check, it just never goes ahead of size++;
 * so that element is there but completely useless and basically its removed.
 * 
 * for the index function, it just perform some checks.
 * otherwise it will just return you the the element at the index.
 * 
 * And I dont think I need to explain print function.
 * 
 * Thanks for checking this out :D
 * And yea ik that it didn't really include advance topics but uh sorry I guess.
 * 
 */
