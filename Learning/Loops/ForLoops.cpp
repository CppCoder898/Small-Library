#include<iostream>
using namespace std;

int main()
{

    for(int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * for(<varaible/iterator> <condition> <iterating>)
 * {
 *      <code>
 * }
 *
 * What happens here:
 *
 * You define a varaible,
 * then set a condition, here till i < 10 run the loop.
 * Third i++ so as the loop goes it will add 1 to i,
 * when i will reach 10, the loop will close cuz the condition is true now as i = 10 and condition i < 10.
 *
 * How it works:
 *
 * Gets the varaible,
 * checks the condition,
 * if condition is not true run loop then go to ++i or i++,
 * if condition is true end loop.
 *
 * The varaible is only limited to loop and if you created a varaible like int i;
 * and then for(int i = 0) it will show error.
 * 
 * This is called "Variable scope", we'll learn about this later tho.
 *
 * You can also set to it like: for(i = 100; i >= 0; i--),
 * for a backwards loop. And till i is less or equal to 0 it will work if it goes -1 then loop will end.
 * And if you are wondering how it is printing number, we are printing i as varaible just like cout << x;
 *
 * Next: "WhileLoops";
 *
 */