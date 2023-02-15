//Preston Kearnan
//Lab_
//

#include<iostream>
#include<iomanip>

using namespace std; 

double average(double a[], const int size);

int main(void) {

	cout << "This is a program that calculates the average of 5 numbers..." << endl; 

	const int n = 5; 
	double a[n]; 
	int A = 0; 

	for (int i = 0; i < 5; i++) {

		cout << "Enter an Integar: ";
		cin >> a[i];
	}
	
	cout << "Average: " << average(a, n);
	
	return 0; 
}

double average(double a[], const int size)
{
	double A = 0; 
	for (int i = 0; i < 5; i++) {
		A += a[i]; 
	}
	return (A / 5);
}
