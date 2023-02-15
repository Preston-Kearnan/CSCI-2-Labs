//Preston Kearnan
//Lab_
//

#include<iostream>
#include<iomanip>

using namespace std; 

int main(void) {

	double a, b, c; 
	char playAgain; 
	do {
		cout << "This is Linear Equation Calculator with steps! ( ax + b = c ) " << endl;

		cout << "Please enter your a value: ";
		cin >> a;

		cout << "Please enter your b vale: ";
		cin >> b;

		cout << "Please enter your c value: ";
		cin >> c;

		cout << "\nYour equation : " << a << "x + " << b << " = " << c << endl;

		double firstStep = c - b;

		cout << "\nFirt Step: " << a << "x = " << firstStep << endl;

		double secondStep = firstStep / a;

		cout << "\nSecond Step: x = " << setprecision(3) << secondStep << endl;


		cout << "\nWould you like to play again (y or n): " << endl; 
		cin >> playAgain; 
	} while (playAgain == 'y'); 
	return 0; 
}