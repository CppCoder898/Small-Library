#include<iostream>
using namespace std;
template <typename T, typename U>

auto max(T x, U y) //new data type! (kinda?)
{
    return (x > y) ? x : y;
}

int main()
{

    cout << max(1, 2.1);

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * Function templates makes it so you can accepet multiple data types.
 * However, one template accepts only one if you are giving 2 diffrent data types, you will need 2 templates.
 *
 * auto just decides what data type to return.
 * auto is usefull in future, it decides automatically to what datatype to give or choose.
 * 
 * auto can be used like: auto a = "Bro"; and it will give it string data type.
 * You can use it with foreach loop or etc.
 *
 * Next: "Enums";
 *
 */
