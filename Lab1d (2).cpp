//Preston Kearnan
//Lab_1d_Struct Temps
//01-23-23

#include<iostream>
#include<iomanip>

using namespace std; 

template<typename T>
struct Person {
	string name;
	string gender;
	T age;

	void printDetails(void);
	bool isMinor(void);  //returns true if Person is a minor.
};

int main(void) {

	Person<int> A; 
	A.name = "Roan"; 
	A.gender = "Unknown"; 
	A.age = 18;

	A.printDetails();
	A.isMinor();
	if (A.isMinor() == true) {
		cout << A.name << " is a Minor" << endl;
	}
	else if (A.isMinor() == false) {
		cout << A.name << " is not a Minor" << endl;
	}

	cout << "\n *********** \n" << endl; 

	Person<int> B;
	B.name = "Preston";
	B.gender = "Sigma Male";
	B.age = 18; 

	B.printDetails();
	B.isMinor();
	if (B.isMinor() == true) {
		cout << B.name << " is a Minor" << endl;
	}
	else if (B.isMinor() == false) {
		cout << B.name << " is not a Minor" << endl;
	}

	cout << "\n *********** \n" << endl;

	Person<float> C;
	C.name = "Andrew";
	C.gender = "?";
	C.age = 18; 

	C.printDetails(); 
	C.isMinor();
	if (C.isMinor() == true) {
		cout << C.name << " is a Minor" << endl;
	}
	else if (C.isMinor() == false) {
		cout << C.name << " is not a Minor" << endl;
	}

	cout << "\n *********** \n" << endl;

	Person<float> D;
	D.name = "Redden";
	D.gender = "GOD";
	D.age = 16; 

	D.printDetails();
	D.isMinor(); 
	if (D.isMinor() == true) {
		cout << D.name << " is a Minor" << endl;
	}
	else if (D.isMinor() == false) {
		cout << D.name << " is not a Minor" << endl;
	}

	return 0; 
}

template<typename T>
void Person<T>::printDetails(void)
{
	cout << "Name: " << name << endl; 
	cout << "Gender: " << gender << endl; 
	cout << "Age : " << age << endl; 
}

template<typename T>
bool Person<T>::isMinor(void)
{
	if (age >= 18) {
		return false; 
	}
	else if (age < 18) {
		return true; 
		}
}
