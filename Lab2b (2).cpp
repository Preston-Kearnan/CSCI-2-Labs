//Preston Kearnan
//08/22/22
//Lab_2b
//Circle Calculator


#include<iostream>
using namespace std;

int main(void)
{
	double d;
	double C, A, radius; 

	//title
	cout << "Circle Calculator" << endl;

	//get radius
	cout << "\nInsert Diameter of the Circle: ";
	cin >> d;

	//calculations

	radius = d / 2; 
	C = 2 * 3.14159 * (d / 2);
	A = 3.14159 * (d / 2) * (d / 2);

	//Display Calculations

	cout << "\nRadius: r = " << radius << endl; 
	cout << "Circle Circumfrence: P = 2 * 3.14159 * "  << radius << " = " << C << " units" << endl;
	cout << "CIrcle Area: A = 3.14159 * " << radius << "^2 = " << A << "square units" << endl;


	return (0);
}