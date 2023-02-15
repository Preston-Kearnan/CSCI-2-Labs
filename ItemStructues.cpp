//Preston Kearnan
//Lab_
//

#include<iostream>
#include<iomanip>

using namespace std; 

struct Item {
	string name;
	double wholesaleCost;
	int quantity;
	double markUp;

	void printProperties(void);
	void printRetailPrice(void); 
};

void costumerDisplay(Item);

int main(void) {

	const int size = 5; 
	Item a[size]; 

	a[0].name = "Halo Top";
	a[0].wholesaleCost = 5.00;
	a[0].quantity = 15;
	a[0].markUp = 25;

	a[1].name = "Milk";
	a[1].wholesaleCost = 3.00;
	a[1].quantity = 50;
	a[1].markUp = 15;

	a[2].name = "Captain Crunch";
	a[2].wholesaleCost = 10.00;
	a[2].quantity = 100;
	a[2].markUp = 20;

	a[3].name = "Pizza";
	a[3].wholesaleCost = 8.00;
	a[3].quantity = 10;
	a[3].markUp = 30;

	a[4].name = "Eggs";
	a[4].wholesaleCost = 3.00;
	a[4].quantity = 5;
	a[4].markUp = 15;

	costumerDisplay(a[0]);

	return 0; 
}

void Item::printProperties(void)
{
	cout << "name: " << name << endl;
	cout << "Whole Sale Cost: $" << wholesaleCost << endl; 
	cout << "Quantity: " << quantity << endl; 
	cout << "Mark Up percent: " << markUp/100 << endl; 
}

void Item::printRetailPrice(void)
{
	(1 + (markUp / 100)) * wholesaleCost; 
}

void costumerDisplay(Item arg) {
	cout << "Name: " << arg.name << endl; 
	cout << "Price: " << 1 + (arg.markUp / 100) * arg.wholesaleCost << endl; 
	cout << "Quantity in Stock: " << arg.quantity << endl; 
}