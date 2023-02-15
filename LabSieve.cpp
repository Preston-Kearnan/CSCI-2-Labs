//Preston Kearnan
//Lab_Sieve
//12-07-22

#include<iostream>
#include<iomanip>

using namespace std; 

void printArray(bool arg[], const int n); 
void printPrimes(bool arg[], const int n);

int main(void) {

	const int size = 1000;
	bool a[size];

	for (int i = 0; i < size; i++) {
		a[i] = true; 
	}

	for (int j = 2; j < size; j++) {
		for (int i = 2; i < (1.0*size) / j; i++) {
			a[j * i] = false;
		}
	}

	printPrimes(a, size); 
	
	return 0; 
}

void printArray(bool arg[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << " arg[" << i << "] = " << arg[i] << endl; 
	}
}

void printPrimes(bool arg[], const int n)
{
	for (int i = 2; i < n; i++) {
		if (arg[i] == true) {
			cout << i << ", ";
		}
	}
}
