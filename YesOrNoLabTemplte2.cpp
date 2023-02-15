//simple app template
#include <iostream>
using namespace std;

bool runAgain(void);

int main(void) {


    do {






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
