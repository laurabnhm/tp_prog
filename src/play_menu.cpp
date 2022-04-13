#include <iostream>
#include <random>
using namespace std;

#include "common_functions.h"
#include "play_guess_the_number.h"
#include "play_hangman.h"

void Menu()
{
    bool game = true;

    while(game == true)
    {
        showMenu();

        char user_choice;
        cin >> user_choice;

        switch(user_choice)
        {
            case '1' : play_guess_the_number();
                break;
            case '2' : play_hangman();
                break;
            case 'Q' : case 'q' : game = false;
                break;
            default : cout << "Sorry I don't know that command!" << endl;
        }
    }
}

void showMenu() 
{
    cout << "What game do you want to play ?" << endl;
    cout << "Press 1 to play : Guess the number" << endl;
    cout << "Press 2 to play : Hangman" << endl;
    cout << "Press Q to quit" << endl;
}