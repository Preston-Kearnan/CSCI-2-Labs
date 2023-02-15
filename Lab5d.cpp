//Preston Kearnan
//Lab 5d
//Pi Series

#include <iostream>
#include <iomanip>
using namespace std;

double CalPi(int numberTerms);

int main() 
{
    int numberT;
    int divisor = 1;
    int i = 1;

    cout << "Pi Infinite Series Calculator" << endl;

    cout << "\nHow Many Terms of Ten would you like to calculate? ";
    cin >> numberT;
    cout << endl; 
    cout << fixed << setprecision(10);
    for (int i = 1; i <= numberT; i++) {
        cout << "\tPI(" << i * 10 << ") = ";
        cout << CalPi(i * 10) << endl;
    }
    return 0;
}

double CalPi(int numberTerms) 
{
    int divisor = 1.0;
    double pi = 4;
    for (int i = 0; i < numberTerms; i++) {
        divisor = divisor + 2;
        if (i % 2) {
            pi += 4.0 / divisor;
        }
        else {
            pi -= 4.0 / divisor;
        }
    }
    return pi;
}