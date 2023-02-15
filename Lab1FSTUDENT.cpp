//Preston Kearnan
//Lab_ 1f _ Student Inheritence
//01-30-23

#include<iostream>
#include<iomanip>
#include<string> 

using namespace std; 

class Person {
private:
	string firstName;
	string lastName;
	int age; 
public:
	Person(string argF = "John", string argL = "Doe", int argA = 0); 
	string getfirstName(void);
	void setfirstName(string argF);
	string getlastName(void); 
	void setlastName(string argL); 
	int getAge(void); 
	void setAge(int argA); 
	virtual void printProperties(); 
};

class USCitizen : public Person {
private:
	int SSN; 

public: 
	USCitizen(string argF = "John", string argL = "Doe", int argA = 0, int argSSN = 0);
	int getSSN(void); 
	void setSSN(int argSSN); 
	void printProperties(); 
};

int main(void) {

	Person person1; 

	person1.setfirstName("Vladmir");
	person1.setlastName("Putin"); 
	person1.setAge(47); 

	person1.printProperties();
	cout << "\n*******\n" << endl;

	Person person2;

	person2.setfirstName("King");
	person2.setlastName("James"); 
	person2.setAge(457); 

	person2.printProperties(); 
	cout << "\n*******\n" << endl;

	USCitizen US1;

	US1.setfirstName("Andrew");
	US1.setlastName("Card");
	US1.setAge(18);
	US1.setSSN(235782); 

	US1.printProperties(); 
	cout << "\n*******\n" << endl;

	USCitizen US2; 

	US2.setfirstName("Preston"); 
	US2.setlastName("Kearnan"); 
	US2.setAge(18); 
	US2.setSSN(219032); 

	US2.printProperties();
	cout << "\n*******\n" << endl;

	USCitizen US3;

	US3.setfirstName("Roan");
	US3.setlastName("Morgan");
	US3.setAge(18);
	US3.setSSN(235654); 

	US3.printProperties(); 
	cout << "\n*******\n" << endl;

	return 0; 
}

Person::Person(string argF, string argL, int argA)
{
	setfirstName(argF);
	setlastName(argL);
	setAge(argA); 
}

string Person::getfirstName(void)
{
	return firstName;
}

void Person::setfirstName(string argF)
{
	firstName = argF; 
}

string Person::getlastName(void)
{
	return lastName;
}

void Person::setlastName(string argL)
{
	lastName = argL; 
}

int Person::getAge(void)
{
	return age;
}

void Person::setAge(int argA)
{
	age = argA; 
}

void Person::printProperties()
{
	cout << "First Name: " << getfirstName() << endl; 
	cout << "Last Name: " << getlastName() << endl; 
	cout << "Age: " << getAge() << endl; 
}

USCitizen::USCitizen(string argF, string argL, int argA, int argSSN)
{
	setfirstName(argF);
	setlastName(argL);
	setAge(argA);
	setSSN(argSSN); 
}

int USCitizen::getSSN(void)
{
	return SSN;
}

void USCitizen::setSSN(int argSSN)
{
	SSN = argSSN; 
}

void USCitizen::printProperties()
{
	Person::printProperties(); 
	cout << "SSN: " << getSSN() << endl; 
}
