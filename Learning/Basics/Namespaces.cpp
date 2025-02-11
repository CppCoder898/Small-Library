#include<iostream>
using namespace std;
//using namespace std::cout

namespace first{
    int x = 10;
    //Make more variables!
}

int main()
{

    int x = 1;

    cout << x << " " << first::x;

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * Namespace are a different version of something,
 * and to use them "<namespace name>::<object>".
 * 
 * You can also use "using namespace std::<keyword>" so you dont have to use "std::" specifically with that keyword,
 * For example let's say you're using "using namespace std::cout" so you can type cout, and dont need to type
 * "std::cout" but you would still have to type "std::string" or "std::endl".
 * 
 * <namespace name> = The name you're using for your namespace.
 * <object> = Your variable name.
 * <keyword> = the keyword you're using like "std::cout", "std::endl" or "std::string"
 * 
 * You can also make different variable in 1 namespace.
 *
 * next: "TypedefAndUsing"; Idk the file name hurts my brain.
 *
 */