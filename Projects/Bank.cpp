#include<iostream>
using namespace std;

void deposit(double &money);
void withdraw(double &money);

int main()
{

    int options;
    double money = 0.0;

    while(options != 4)
    {
        cout << "Select Option:" << '\n';
        cout << "1.Show Balance\n";
        cout << "2.Deposit\n";
        cout << "3.Withdraw\n";
        cout << "4.Exit\n";
        cout << "Choose: ";
        cin >> options;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
        }

        switch(options)
        {
            case 1:
              cout << "Balance: " << money << '\n';
              break;

            case 2:
              deposit(money);
              break;
            
            case 3:
              withdraw(money);
              break;

            case 4:
              cout << "Thanks for visting! ^_^";
              break;

            default:
              cout << "Plz enter a valid input :(\n";

        }
    }

    return 0;
}

void deposit(double &money)
{

    double amount;

    cout << "Enter amount: ";
    cin >> amount;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Plz enter valid input! :(\n";
    }

    if(amount < 1) {cout << "Plz enter a vlaid amount!\n";}
    else{money += amount;}

    return;

}

void withdraw(double &money)
{

    double amount;

    cout << "Enter amount: ";
    cin >> amount;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Plz enter valid input! :(\n";
    }

    if(amount > money) {cout << "You dont have enough balance!\n";}
    if(amount < 1) {cout << "Plz enter a valid input! :(\n";}
    else{money -= amount;}

    return;

}

/*
 * No-In-notes
 *
 * no in notes because a Practice program + i didnt add anything new like the number game
 * number really was the best Practice program + the cin.fail or ignore, clear are also functions but comes with library
 *
 * Fun Fact: You are broke so you enetred 10000000 deposit lol
 * Suggested: Make a rock paper scissors game ;]
 *
 */