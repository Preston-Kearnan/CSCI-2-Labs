//Preston Kearnan
//Lab_2c_Pi Reccursion
//

#include<iostream>
#include<iomanip>

using namespace std; 

double PI(int n);

int main(void) {

	int x; 

	cout << "Enter a number of terms you want to calculate of PI: ";
	cin >> x; 

	cout << "Terms: " << x << endl; 
	cout << PI(x); 

	return 0; 
}

double PI(int n)
{
	if (n == 0) {
		return 4; 
	} else {
		return 4 * pow(-1, n) / (2 * n + 1) + PI(n - 1); 
	}
}
