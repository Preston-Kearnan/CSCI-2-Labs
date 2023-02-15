//Preston Kearnan
//Lab_10a Ski Conditions
//11-30-22

#include<iostream>
#include<iomanip>
#include<vector>
#include<string>

using namespace std; 

class Conditions {
private:
	double snow, temp;
	string date;
public:
	Conditions();

	double getSnow(void);
	void setSnow(double argS);
	double getTemp(void);
	void setTemp(double argT);
	string getDate(void);
	void setDate(string argD);

	void displayConditions(void); 
};

void displayWeekConditions(vector<Conditions>& argC); 

int main(void) {

	vector<Conditions> weekCond; 

	for (int i = 0; i < 7; i++) {
		Conditions temp;
		string x; 
		double y, z;

		cout << "Please enter the date (00-00-00): ";
		getline(cin, x); 
		temp.setDate(x);

		cout << "Please enter the Temperature in Fahernheit: ";
		cin >> y; 
		temp.setTemp(y); 

		cout << "Please enter the Inches of Snow Fall: ";
		cin >> z; 
		temp.setSnow(z); 
		weekCond.push_back(temp); 
		cin.ignore(); 
	}

	displayWeekConditions(weekCond); 

	return 0; 
}

Conditions::Conditions()
{
	setSnow(0);
	setTemp(0);
	setDate("00-00-00"); 
}

double Conditions::getSnow(void)
{
	return snow;
}

void Conditions::setSnow(double argS)
{
	snow = argS;
}

double Conditions::getTemp(void)
{
	return temp;
}

void Conditions::setTemp(double argT)
{
	temp = argT; 
}

string Conditions::getDate(void)
{
	return date;
}

void Conditions::setDate(string argD)
{
	date = argD; 
}

void Conditions::displayConditions(void)
{
	cout << "\nDate: " << getDate() << endl;
	cout << "Temperature: " << getTemp() << " Degrees Farhenhiet" << endl;
	cout << "Snow Fall: " << getSnow() << " Inches" << endl; 
}

void displayWeekConditions(vector<Conditions>& argC)
{
	for (int i = 0; i < argC.size(); i++) {
		argC[i].displayConditions(); 
	}
}
