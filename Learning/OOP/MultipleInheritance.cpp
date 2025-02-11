#include<iostream>
using namespace std;

class Gamer
{

    public:
        bool likesGame = true;
        bool YouTuber = true;
        string favGame = "Minecraft";

};

class Programmer
{

    public:
        string favLanguage = "C++";
        int yearExperience = 1;

};

class NotMe : public Gamer,Programmer
{

    public:
        bool lazy = true;
        
    void print()
    {
        cout << "Likes games: " << likesGame << '\n';
        cout << "YouTuber: " << YouTuber << '\n';
        cout << "Fav game: " << favGame << '\n';
        cout << "Fav coding language: " << favLanguage << '\n';
        cout << "Coding time [year]: " << yearExperience << '\n';
    }

};

int main()
{

    NotMe you;
    
    you.print();

    return 0;
}

/*
 * In-notes
 * --------
 * 
 * NotMe inherits from a gamer and a programmer.
 * 
 * they have boths attributes.
 * You can also use protected but i just wanted to make a easy-peasy explainaintion.
 * 
 * Therefore idk.
 * Pretty easy chapter lol.
 * 
 * Next: "ObjectPointer"; Just a pointer for an object duh.
 * 
 */