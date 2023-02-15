#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

struct UsedCar
{
private:
	string make, model;
	int year, mileage;

public:
	void setMake(string arg);
	string getMake(void);

	void setModel(string arg);
	string getModel(void);

	void setYear(int arg);
	int getYear(void);

	void setMileage(int arg);
	int getMileage(void);

	void printCar(void);
};


bool runAgain(void);

int main(void)
{
	srand(time(0));

	vector<UsedCar> cars;
	string tempStr;
	int tempInt;
	UsedCar tempCar;

	cout << "This program stores car information that you enter. Please enter your car(s).\n" << endl;
	do
	{
		cout << "Enter your model: ";
		getline(cin, tempStr);
		tempCar.setModel(tempStr);

		cout << "Enter your make: ";
		getline(cin, tempStr);
		tempCar.setMake(tempStr);

		cout << "Enter your year: ";
		cin >> tempInt;
		tempCar.setYear(tempInt);

		cout << "Enter your mileage: ";
		cin >> tempInt;
		tempCar.setMileage(tempInt);

		cars.push_back(tempCar);

	} while (runAgain());


	cout << "\n\n *** Displaying cars: " << endl;
	for (int i = 0; i < cars.size(); i++)
	{
		cout << "Car #" << i << ": \n";
		cars[i].printCar();
	}

	cout << endl;

	tempInt = rand() % cars.size();
	cout << "\n*** Randomly displaying car #" << tempInt + 1 << ": \n";

	cars[tempInt].printCar();

	return 0;
}

void UsedCar::setMake(string arg)
{
	make = arg;
}

string UsedCar::getMake(void)
{
	return make;
}

void UsedCar::setModel(string arg)
{
	model = arg;
}

string UsedCar::getModel(void)
{
	return model;
}

void UsedCar::setYear(int arg)
{
	if (arg >= 0)
		year = arg;
	else
		year = 0;
}

int UsedCar::getYear(void)
{
	return year;
}

void UsedCar::setMileage(int arg)
{
	if (arg >= 0)
		mileage = arg;
	else
		mileage = 0;
}

int UsedCar::getMileage(void)
{
	return mileage;
}

void UsedCar::printCar(void)
{
	cout << "Model: " << model << endl
		<< "Make: " << make << endl
		<< "Year: " << year << endl
		<< "Mileage: " << mileage << endl << endl;
}

bool runAgain(void)
{
	char userInput;
	string resetGet;
	cout << "\nAdd another car? (y/n): ";
	cin >> userInput;
	cin.ignore();

	return (userInput == 'y');
}