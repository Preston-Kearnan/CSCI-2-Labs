//Preston Kearnan
//Lab_Mandel Brot Set
//12-5-22

#include <iostream>
#include <complex>
using namespace std;

int mandelbrotEscapeNumber(complex<double> c);
char mandelbrotEscapeChar(int i);

int main(void)
{
	complex<double> a;
	double x;
	double y = 1;

	a.real(0.75);
	a.imag(0.83); 

	for (y = 1; y > -1; y = y - 0.1) {

		for (x = -1.5; x < 0.5; x = x + 0.02) {
			a.real(x);
			a.imag(y);
			int temp = mandelbrotEscapeNumber(a);
			cout << mandelbrotEscapeChar(temp);
		}

		cout << endl;

	}

	return(0);
}


//Function Implementation
int mandelbrotEscapeNumber(complex<double> c) {

	complex<double> z;
	int i = 0;

	do {

		z = z * z + c; 
		i++;

		if (i >= 500)
			break;

	} while (abs(z) <= 2.0);

	return(i);

}

char mandelbrotEscapeChar(int i) {

	if (i < 5)
		return(' ');
	if (i < 10)
		return(' ');
	if (i < 50)
		return(' ');
	if (i < 100)
		return(' ');
	if (i < 150)
		return(' ');

	return('~');

}