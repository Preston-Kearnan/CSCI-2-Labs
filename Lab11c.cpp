//Preston Kearnan
//Lab_
//

#include <iostream>
#include <iomanip>
using namespace std;

double sin(double arg, int precision);
int factorial(int);

int main(void) {

    //project description
    cout << "Lab 11c Sin Series" << endl;

    char userResp = 'y';
    int terms = 17;
    double sin = 0;

    double x;

    do {
        sin = 0; //reset the accumulator

        cout << "Enter an x-value in degrees: ";
        cin >> x;

        x = x * 3.14159 / 180;

        for (int i = 0; i < terms; i++) {
            sin = sin + pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        }

        cout << "result: " << sin << endl;

        cout << "Would you like to run again? (y/n): ";
        cin >> userResp;

    } while (userResp == 'y');

    return(0);
}

int factorial(int number) {

    if (number <= 1) return 1;

    return(number * factorial(number - 1));
}