#include<iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main()
{

    string topping1 = "Peproni";
    string topping2 = "mushroom";

    bakePizza();
    bakePizza(topping1);
    bakePizza(topping1, topping2);

    return 0;
}

void bakePizza()
{
    cout << "Here is your pizza!\n";
}

void bakePizza(string topping1)
{
    cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(string topping1, string topping2)
{
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}

/*
 *
 * In-notes
 * --------
 *
 * A functions identity is its parameters, as long as they are different, functions can have same name.
 * Ya thats literally it.
 *
 * Next: "VariableScope"; Remeber when i said in loops cahpter? its time!
 *
 */
 
 
