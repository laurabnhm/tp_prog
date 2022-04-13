#include <iostream>
#include <random>
using namespace std;

#include "common_functions.h"
#include "play_hangman.h"

void play_hangman()
{
    int nb_vies = 8;
    const string word_chosen = randomWords();
    string final_word;
    bool end_game = false;
    
    cout << /*word_chosen <<*/ endl;
    fillWordWithIndents(word_chosen, final_word); // remplir le mot avec des tirets (sans l'afficher)

    while (end_game == false) // tant que le jeu n'est pas fini
    {
        showNbLives(nb_vies);
        cout << final_word << endl; // mot qui s'affiche avec les tirets
        string ask_letter = askLetterToUser(); // demande une lettre à l'utilisateur

        size_t blank = findPosLetter(word_chosen, ask_letter, 0); // renvoie la position de la lettre dans le mot qu'on utilisera pour remplir les blancs

        // si la lettre entrée n'est pas dans le mot
        if (blank == string::npos)
        {
            nb_vies--;
            if (nb_vies == 0)
            {
                end_game = true;
                showDefeatMessage(word_chosen);
            }
        }
        
        else
        {
            while (blank != string::npos) // tant qu'on trouve une lettre dans le mot
            {
                final_word.replace(blank, 1, ask_letter); // on remplace la lettre dans le mot
                blank = findPosLetter(word_chosen, ask_letter, blank+1); // s'il y a plusieurs lettres identiques
            }

            if (final_word.find('-') == string::npos) // s'il n'y a plus de petits traits dans le mot
            {
                end_game = true;
                showCongratMessage(word_chosen);
            }
        }
    }
}

string randomWords() 
{
    vector<string> wordsList = {"billard", "cuivre", "plastique", "trappe", "port", "esquimau", "silhouette", "aspirine", "larynx", "citrouille"};
    
    // un mot est choisi au hasard
    // il en ressort un int car c'est la position dans le tableau
    int pos_word_chosen = pickRandomNumber(0, wordsList.size()-1);

    //on retourne le mot à la position choisie
    return wordsList[pos_word_chosen];
}

void fillWordWithIndents(const string &word_chosen, string &final_word) 
{
    for(size_t i = 0; i < word_chosen.size(); i++)
        final_word += "-";
}

void showNbLives(int nb_vies) 
{
    cout << "Tu as " << nb_vies << " vies." << endl;
}

string askLetterToUser()
{
    string ask_letter;
    cout << "Entre une lettre : ";
    cin >> ask_letter;
    cout << endl;
    return ask_letter;
}

size_t findPosLetter(const string &word_chosen, const string &ask_letter, size_t pos) 
{
    return word_chosen.find(ask_letter, pos);
}

void showDefeatMessage(const string &word_chosen) 
{
    cout << "You lose :( " << endl;
    cout << "The word was " << word_chosen << endl;
    cout << endl;
}

void showCongratMessage(const string &word_chosen) 
{
    cout << "You won :) " << endl;
    cout << "The word was " << word_chosen << endl;
    cout << endl;
}

