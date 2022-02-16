#include <iostream>
#include <random>
using namespace std;


int pickRandomNumber(int min, int max);
int askToUser();
void greaterOrSmaller();


int main()
{
    int random_number = pickRandomNumber(0, 100);

    cout << "Guess the number!" << endl;
    int ask_number = askToUser();

    while(ask_number != random_number)
    {
        if(ask_number < random_number)
        {
            cout << "Greater" << endl;
            ask_number = askToUser();
        }
            
        else if(ask_number > random_number)
        {
            cout << "Smaller" << endl;
            ask_number = askToUser();
        }
    }
        
    cout << "Congrats, you won!" << endl;
}


int pickRandomNumber(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int askToUser()
{
    int ask_number;
    cout << "Try to guess the number: ";
    cin >> ask_number;
    return ask_number;
}