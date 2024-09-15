#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int Number = rand()%100+1;

    int guessNumber;
    bool guessed = false;

    while(!guessed){
        cout<< "Guess a number between 1 and 100: ";
        cin>> guessNumber;

        if(guessNumber < Number){
            cout<< "Guess is too low! Try again.\n";
        }else if(guessNumber > Number){
            cout<< "Guess is too high! Try again.\n";
            }else{
            cout<< "Congratulations! The guessed number is right";
            guessed=true;
            }
    }
    return 0;
}
