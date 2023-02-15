
//Preston Kearnan
//Lab_52_Guessing Game


#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{

    bool gameTime = true;
    int gameTries = 1;

    int userGuess;
    srand(time(NULL));

    int randomInt = rand() % 100 + 1;

    do {
        cout << "\nGuess a number from 1 to 100: ";
        cin >> userGuess;
        if (randomInt > userGuess) {
            cout << "\nToo Low";
        }
        else {
            if (userGuess == randomInt) {
                cout << "\nYou Got It! The Number Was: " << randomInt << endl;
            }
            else if (userGuess > randomInt)
                cout << "\nToo High";

        }
        if (gameTime = true) {
            string userDecision;

            cout << "\nWould you like to play again? (y/n): ";
            cin >> userDecision;

            if (userDecision != "y") {
                cout << "\nThanks for playing!";
                return 0;
            }
            else {
                gameTries += 1;
                cout << endl;
                cout << gameTries << " \ntry/s\n";
            }
        }
    } while (gameTime = true);
    return 0;
}

