#include<iostream>
using namespace std;

int main()
{

    int month = 1;

    switch(month)
    {
        case 1:
          cout << "January";
          break;
        
        case 2:
          cout << "February";
          break;

        case 3:
          cout << "March";
          break;

        case 4:
          cout << "April";
          break;

        case 5:
          cout << "May";
          break;

        case 6:
          cout << "June";
          break;

        case 7:
          cout << "July";
          break;

        case 8:
          cout << "August";
          break;

        case 9:
          cout << "September";
          break;

        case 10:
          cout << "October";
          break;

        case 11:
          cout << "November";
          break;

        case 12:
          cout << "December";
          break;

        default:
          cout << "Error201";
    }

    return 0;
}

/*
 *
 * In-notes
 * --------
 *
 * Switches are cleaner 'if-else'.
 * 
 * case<case>:
 *   content
 *   break;
 *
 * Break is used to end situation or it will start a chain reaction,
 * write case then actual case and a colon then content, it's not important for line breaks.
 *
 * Default is like a else in switches.
 * An important thing to consider is that switches don't work with strings.
 * 
 * Also while switches work, 'if-else' are more simpler and more flexible.
 *
 * Next: "ternaryOperator";
 *
 * Good luck that's last part of this chapter.
 *
 */