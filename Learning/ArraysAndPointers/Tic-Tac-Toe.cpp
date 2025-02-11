#include<iostream>
#include<ctime>
using namespace std;

void drawBoard(char spaces[]);
void playerMove(char spaces[], char player);
void computerMove(char spaces[], char computer);
bool checkWinner(char spaces[], char player, char computer);
bool checkTie(char spaces[]);

int main()
{

    srand(time(NULL));

    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    char player = 'O';
    char computer = 'X';
    bool running = true;

    drawBoard(spaces);

    while(running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces))
        {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces))
        {
            running = false;
            break;
        }
    }
    cout << "Thanks for playing! :D";

    return 0;
}

void drawBoard(char spaces[])
{

    cout << "     |     |     \n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    cout << "     |     |     \n";

}

void playerMove(char spaces[], char player)
{

    int numInput;

    do{
        cout << "Enter spot: ";
        cin >> numInput;
        numInput--;

        if(spaces[numInput] == ' ') {spaces[numInput] = player; break;}
        else{cout << "The place is occupied!\n";}

    }while(!numInput > 0 && !numInput < 8);

}
void computerMove(char spaces[], char computer)
{

    int cNum = rand() % 9;

    while(true)
    {
        cNum = rand() % 9;

        if(spaces[cNum] == ' ')
        {
            spaces[cNum] = computer;
            break;
        }
    }

}
bool checkWinner(char spaces[], char player, char computer)
{

    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player ? cout << "YOU WIN!\n" : cout << "YOU LOSE!\n";
    }
    else{return false;}

    return true;

}
bool checkTie(char spaces[])
{

    for(int i = 0; i < 9; ++i)
    {
        if(spaces[i] == ' ')
        {
            return false;
        }
    }
    cout << "ITS A TIE!\n";

    return true;

}

/*
 *
 * In-notes?
 * ---------
 *
 * This shouldn't really be 158 lines, but I am a line waster, so that tells A LOT.
 * 
 * Anyway if you're wondering how this is working, this basically prints array and changes them.
 * And it looks like we're playing game, ya that's best I can explain.
 * 
 * THE END PLAY GAME AND REST!
 *
 */