#pragma once
#include <string.h>

void play_hangman();
std::string randomWords();
void fillWordWithIndents(const string &word_chosen, string &final_word);
void showNbLives(int nb_vies);
std::string askLetterToUser();
size_t findPosLetter(const string &word_chosen, const string &ask_letter, size_t pos);
void showDefeatMessage(const string &word_chosen);
void showCongratMessage(const string &word_chosen);