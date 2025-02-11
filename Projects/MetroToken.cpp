#include<iostream>
#include<unistd.h>
using namespace std;

class Token
{

    public:
        bool canScan = true;
        bool gateOpen = false;
        

    void scan()
    {
        if(canScan)
        {   
            canScan = false;
        }
        openGate();
    }    

    void openGate()
    {
        gateOpen = true;
        cout << "Gate open for 10s\n";
        sleep(10);
        gateOpen = false;
        cout << "Gate closed\n";
    }

    void takeToken()
    {
        openGate();
        canScan = true;
    }

};

int main()
{

    Token *token1 = new Token;
    int input;

    while(true) 
    {

        cout << "CHOOSE 1:\n";
        cout << "1.Scan\n";
        cout << "2.Drop\n";
        cout << "3.Leave\n";
        cout << "Select: ";

        cin >> input;

        if(input == 1)
        {
            if(!token1->canScan) cout << "You have scanned this!\n";
            else token1->scan(); continue;
        }

        else if(input == 2)
        {
            if(token1->canScan)
            {
                cout << "Token has not been scanned, are you sure want to continue?\n";
                cout << "1.Leave\n";
                cout << "2.Yes\n";
                cout << "Select: ";

                cin >> input;
                if(input == 2)
                {
                    token1->takeToken();
                    cout << "Thanks for using program ^_^";
                    break;
                }
                continue;
            }
            token1->takeToken();
            cout << "Thanks for using program :)";
            break;
        }

        else cout << "Thanks for using program :]\n"; break;
    }

    return 0;
}

/*
 * In-no-notes
 * -----------
 * 
 * This is a custom silly haha lulu lol program.
 * 
 * So no In-notes.
 * 
 */ 