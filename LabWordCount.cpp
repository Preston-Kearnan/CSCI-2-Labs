//Preston Kearnan
//Word Count App
//11-21-22
#include <iostream>
#include<string>
using namespace std;

bool runAgain(void);

int wordCount(string arg); 

int main(void) {

    cout << "This app will count your words for you!" << endl;

    do {
        string x; 

        cout << "Please enter the words you would like to have counted : ";
        getline(cin, x); 

        cout << endl; 
        cout << "Words: " << wordCount(x);


    } while (runAgain() == true);

    return(0);
}
bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like to run again (y or n): ";
    cin >> userResponse;
    cin.ignore();

    if (userResponse == 'y' || userResponse == 'Y')
        return(true);

    return(false);
}

int wordCount(string arg)
{
    int words = 1; 

    for (int i = 0; i < arg.size(); i++)
    {
            if (arg[i] == ' ' &&  arg[i + 1] != ' ') {
                words++;
            }
    }

    if (arg[0] == '\0' || arg[0] == ' ')
        words = words - 1;

    return words;
}
