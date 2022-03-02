#include <iostream>
#include <random>
using namespace std;

#include "common_functions.h"
#include "play_guess_the_number.h"

void play_guess_the_number()
{
    int random_number = pickRandomNumber(0, 100);

    cout << "Guess the number!" << endl;
    int ask_number = askNumberToUser();

    while(ask_number != random_number)
    {
        if(ask_number < random_number)
        {
            cout << "Greater" << endl;
            ask_number = askNumberToUser();
        }
            
        else if(ask_number > random_number)
        {
            cout << "Smaller" << endl;
            ask_number = askNumberToUser();
        }
    }
        
    cout << "Congrats, you won!" << endl;
}

int askNumberToUser()
{
    int ask_number;
    cout << "Try to guess the number: ";
    cin >> ask_number;
    return ask_number;
}