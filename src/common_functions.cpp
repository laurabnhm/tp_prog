#include <iostream>
#include <random>
using namespace std;

#include "common_functions.h"

int pickRandomNumber(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}