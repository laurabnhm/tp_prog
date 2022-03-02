#include <iostream>
#include <random>
#include <string.h>
#include <vector>
using namespace std;

#include "common_functions.h"
//#include "play_guess_the_number.h"

string randomWords();
string askLetterToUser();

int main()
{
    //play_guess_the_number();

    int nb_vies = 8;
    string word_chosen = randomWords();
    string final_word;
    bool end_game = false;
    
    cout << word_chosen << endl;

    for(size_t i = 0; i < word_chosen.size(); i++)
            final_word += "-";

    while (end_game == false) // tant que le jeu n'est pas fini
    {
        cout << final_word << endl; // mot qui s'affiche avec des petits traits
        cout << "Tu as " << nb_vies << " vies." << endl << endl; 
        string ask_letter = askLetterToUser();

        // renvoie la position de la lettre dans le mot qu'on utilisera pour remplir les blancs
        size_t blank = word_chosen.find(ask_letter);

        // si la lettre entrée n'est pas dans le mot
        if (blank == string::npos)
        {
            nb_vies--;
            if (nb_vies == 0)
            {
                end_game = true;
                cout << "You lose :( " << endl;
            }
        }
        
        else
        {
            while (blank != string::npos) // tant qu'on trouve une lettre dans le mot
            {
                final_word.replace(blank, 1, ask_letter); // on remplace la lettre dans le mot
                blank = word_chosen.find(ask_letter, blank+1); // s'il y a plusieurs lettres identiques
            }

            if (final_word.find('-') == string::npos) // s'il n'y a plus de petiyts traits dans le mot
            {
                end_game = true;
                cout << "You won :) " << endl;
            }
        }
    }
}

string randomWords() 
{
    vector<string> wordsList = {"billard", "cuivre", "plasique", "trappe", "port", "esquimau", "silhouette", "aspirine", "larynx", "citrouille"};
    
    // un mot est choisi au hasard
    // il en ressort un int car c'est la position dans le tableau
    int pos_word_chosen = pickRandomNumber(0, wordsList.size()-1);

    //on retourne le mot à la position choisie
    return wordsList[pos_word_chosen];
}

string askLetterToUser()
{
    string ask_letter;
    cout << "Entre une lettre : ";
    cin >> ask_letter;
    return ask_letter;
}