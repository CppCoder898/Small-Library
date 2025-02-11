#include<iostream>
using namespace std;

void walk(int steps);

int main()
{

    walk(100);

    return 0;
}

void walk(int steps)
{

    if(steps > 0) //base case
    {
        cout << "You take 1 step!\n";
        walk(steps - 1); //recursion
    }

}

/*
 * In-notes
 * --------
 *
 * Recursion is calling yourself again and again like a infinite loop.
 * 
 * To stop this we use base case.
 * base case = a case when to end the function kinda like loop's condition/case.
 * 
 * Here this might look useless.
 * but, it's helpful for algorithims or binary tress.
 * Yes ik, you dont even know what that means, but you will in future. (probl- I mean 100%)
 *
 * Also lets try a different example for this:
 * 
 **************************************************************
 * 
 * #include<iostream>
 * using namespace std;
 *
 * int factorial(int num);
 *
 * int main()
 * {
 *
 *  cout << factorial(10);
 *
 *  return 0;
 * }
 *
 * int factorial(int num)
 * {
 *
 *  if(num > 1)
 *  {
 *      return num * factorial(num-1);
 *  }
 *  else{return 1;}
 *
 * }
 *
 *****************************************************************
 *
 * It's a second example but let me tell you what happens here.
 *
 * the first function asks other function (factorial(num-1)) "what is your factorial?"
 * then the other funation asks the other function as well,
 * then this chain goes to 1.
 * After 1 tell 2, 2 tells 3 and chain goes up.
 *
 * untill 1 tell 2, none function is copleted,
 * as the chain goes up the function starts to get complete.
 *
 * The recursion uses more memory and is slower but more helpful for binary trees or algorithims.;
 *
 * Next: ArraysAndPointers > "Array"; Congrats boi/gurl!
 * Practice program: "Bank"; This program is for broke people like yo-
 * 
 */