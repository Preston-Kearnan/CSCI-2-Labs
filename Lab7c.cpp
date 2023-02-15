//Preston Kearnan
//Lab_7c_Linear Searh
//

#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std; 

void aFinder(char arg[], const int size, char x); 

int main(void) {

	srand(time(0));

	const int size = 10; 
	char a[size];
	char x; 
	char userYorN;

	for (int i = 0; i < size; i++) {
		a[i] = char(97 + rand() % 26);
		cout << a[i]; 
	}
	cout << endl; 

	do {
		cout << "\nWhat letter would you like to search for? ";
		cin >> x;

		aFinder(a, size, x);

		cout << "\nWould you like to search for another letter in the sequence?( y/n ) "; 
		cin >> userYorN; 

	} while (userYorN == 'y');
	
	return 0; 
}

void aFinder(char arg[], const int size, char x)
{
	int y = 0; 

	for (int i = 0; i < size; i++) {
		if (arg[i] == x) {
			cout << i; 
			cout << endl;
			y++;
		}
	}
	if (y == 0) {
		cout << "-1" << endl; 
	}
}
