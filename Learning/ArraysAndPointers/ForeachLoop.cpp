#include<iostream>
using namespace std;

int main()
{

    string foods[] = {"Biryani", "Kabab", "Dal Chawal"};

    for(string food : foods) 
    {
        cout << food << '\n';
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * A foreach loop is espacially made for data sets or "Containers";
 * They easy the travel of a data set.
 *
 * BUT, this provides less flexiblity, meaning you can't go backwards or you can't do that much operations, etc.
 * but, a for loop is still better for me.
 *
 * Let's observe what's happening.
 * 
 * the "string food" is basically our iterator and "foods" is what it's iterating.
 * Here everything happens automatically, so you dont need "food++;" or whatever.
 * And it basically used for printing the data-set like vector array or map.
 *
 * Next: "PassingArraysToFunction"; Such a long name.
 *
 */