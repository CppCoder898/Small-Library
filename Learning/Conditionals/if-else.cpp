#include<iostream>
using namespace std;

int main()
{

    int a = 20;
    int b = 22;

    if(a > b) 
    {
        cout << a << " Is greater";
    }
    else if(b > a) 
    {
        cout << b << " Is greater";
    }
    else{cout << "Both are equal!";}

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * 'if' is used to see a situation, 'else-if' is like "if not that, then this", and after, else is like "if nothing then this"
 * if you use an, 'if' after an 'if', it would create another situation rather than creating a question ladder.
 * Also known as if-else ladder an 'if-else' connects from previous question but, 'if' after another 'if', doesn't, also if theres only two possibilities,
 * you can write 'else' directly after 'if' without needing 'if-else', and after an 'if' you make block of it with {} and if you don't it will catch whatever is next to it.
 *
 * Example:
 *
 * 1:
 *
 * if(a > b) {cout << a << " Is greater";} 
 * if(a < b) {cout << b << " Is greater";} <- Not part of above one.
 * else{cout << "Both are equal!";} <- Connected to 2nd one.
 *
 * Although in this case output will still stay the same but, in some cases it won't.
 *
 * Some other operators to compare:
 * --------------------------------
 *
 * <= Less or equal
 * >= Greater or equal
 * == Equal to no less no more
 * != Not equal to, used for char or string or some complex things.
 * 
 * Next: "LogicalOperators"; ;) good luck you are doing great!
 *
 */