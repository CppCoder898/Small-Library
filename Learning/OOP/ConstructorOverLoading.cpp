#include<iostream>
using namespace std;

class Pizza
{

    public:
        string topping1;
        string topping2;

    Pizza(string topping1)
    {
        this-> topping1 = topping1;
    }
    Pizza(string topping1, string topping2)
    {
        this-> topping1 = topping1;
        this-> topping2 = topping2;
    }

};

int main()
{

    Pizza pizza1("Peproni");
    Pizza pizza2("Mushrooms","Peppers");

    cout << "Here is your " << pizza1.topping1 << " Pizza\n";
    cout << "Here is your " << pizza2.topping1 << " and " << pizza2.topping2 << " Pizza\n";

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * So, it's just like over loaded functions.
 * You can make same constructors, as long as they have different arguemnt.
 * 
 * Or, you will get errors.
 * 
 * btw, enjoy your pizza. :D
 * 
 * Next: "GetterAndSetters"; Their name and work is same.
 * 
 */