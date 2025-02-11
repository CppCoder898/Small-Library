#include<iostream>
using namespace std;

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0)
    {
        cout << cardNumber << " is valid";
    }
    else{
        cout << cardNumber << " is not valid";
    }

	return 0;
}
int getDigit(const int number)
{

    return number % 10 + (number / 10 % 10);

}
int sumOddDigits(const string cardNumber)
{

    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum;

}
int sumEvenDigits(const string cardNumber)
{

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;

}

/*
 *
 * In-notes?
 * ---------
 *
 * NOTICE: ths program was copy pasted due to some issues.
 *
 * Rules to check if a credit card num is valid:
 *
 * 1. Double every second digit from right to left
 * If doubled number is 2 digits, split them.
 * 2. Add all single digits from step 1.
 * 3. Add all odd numbered digits from right to left.
 * 4. Sum results from steps 2 & 3.
 * 5. If step 4 is divisible by 10, # is valid.
 *
 * This is how you check.
 * Now i won't explain how program is working, but i will tell whatever is new.
 *
 * 1.cardNumber.size(); this is a bult in function to get a data set's size <name>.size();
 * 2.cardNumber[i] yes, you can treat a string like a character array.
 *
 * some things you should probably know is:
 * uhh not telling, but make sure to try the new things!
 *
 * Next: OOP > "ClassesAndObjects";
 * That will be your final chapter! good luck!;
 *
 * >:D
 *
 */