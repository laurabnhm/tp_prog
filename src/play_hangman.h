#pragma once
#include <string.h>

void play_hangman();
std::string randomWords();
void fillWordWithIndents(string word_chosen, string &final_word);
void showNbLives(int nb_vies);
std::string askLetterToUser();
size_t findPosLetter(string word_chosen, string ask_letter, size_t pos);
void showDefeatMessage(string word_chosen);
void showCongratMessage(string word_chosen);