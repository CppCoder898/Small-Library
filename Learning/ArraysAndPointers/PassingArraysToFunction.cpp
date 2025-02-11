#include<iostream>
using namespace std;

double getTotal(double prices[], int size);

int main()
{

    double prices[] = {50.06, 73.54, 2.88, 93.94};
    int size = sizeof(prices)/sizeof(prices[0]);

    double total = getTotal(prices, size);

    cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int size)
{

    double total;

    //for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); ++i)
    //{
    //    total += prices[i];
    //}

    for(int i = 0; i < size; ++i)
    {
        total += prices[i];
    }

    return total;

}

/* 
 *
 * In-notes
 * -------
 *
 * When you pass a array, it decays into a pointer.
 * 
 * Meaing it's no longer a array and the function dosent know it's size.
 * 
 * So you pass a size varaible or give it a size like i < 5, i < size;
 *
 * If you're wondering how is it possible for a pointer to work like an array?
 * Basically it just moves to next address, and arrays are like line in memory so its works in order!
 *
 * Next: "SearchElemnts";  Linear search system lol.
 *
 */
