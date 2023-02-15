
// Class Notes... rectangle objects using struct
//Preston Kearnan

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


struct Rectangle {

	double width, length;
	string units;
	string color = "white";

	double area(void);
	double perimeter(void);
	void displayInfo(void);
};


void printArrayRects(Rectangle* arg, const int argSize);

int main(void) {
	srand(time(0)); 

	string units[5] = { "cm" , "ft" , "mi" , "m" , "in" }; 
	string color[5] = { "orange" , "blue" , "red" , "white " , "Green" };

	const int size = 100;
	Rectangle a[size]; 

	for (int i = 0; i < size; i++) {
		a[i].length = rand() % 11 + 1.0 * rand() / RAND_MAX;
		a[i].width = rand() % 11 + 1.0 * rand() / RAND_MAX;
		a[i].units = units[rand() % 5];
		a[i].color = color[rand() % 5]; 
	}

	printArrayRects(a, size); 
	

	return(0);
}


double Rectangle::area(void) //:: scope resolution operator
{
	return (length * width);
}

double Rectangle::perimeter(void)
{
	return 2 * length + 2 * width; 
}

void Rectangle::displayInfo(void)
{
		cout << "Length: " << length << endl;
		cout << "Width: " << width << endl;
		cout << "Units: " << units << endl;
		cout << "Color: " << color << endl; 
		cout << "Area: " << area() << " " << units << "^2" << endl;
		cout << "Perimeter: " << perimeter() << " " << units << endl; 
		cout << "\n***********" << endl; 
}

void printArrayRects(Rectangle* arg, const int argSize)
{
	for (int i = 0; i < argSize; i++) {
		arg[i].displayInfo(); 
	}

}
