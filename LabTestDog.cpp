//Preston Kearnan
//Dog Test
//11-21-22

#include<iostream>
#include<iomanip>
#include<vector>
#include<ctime>

using namespace std; 

class Dog {
private:
	string name, breed;
	int age, ID; 

public:

	Dog(); 

	string getName(void);
	void setName(string arg);
	string getBreed(void);
	void setBreed(string arg);
	int getAge(void);
	void setAge(int arg);
	int getID(void);
	void setID(int arg);

	void displayDog(void); 
	int humanAge(void); 

};

void displayAllDogs(vector<Dog>& arg); 

int main(void) {
	srand(time(0)); 

	int n = 100; 
	vector<Dog> randomDogs; 

	string names[10] = {"Luna" , "Charlie" , "Cooper" , "Milo" , "Daisy" , "Zoey" , "Rocky" , "Zeus" , "Max" , "Buddy"};
	string breeds[10] = {"German Shepard" , "Golden" , "Lab" , "Bulldog" , "Pittbull" , "Husky" , "Newfoundland" , "Beagle" , "Poodle" , "Rottweiler"};
	
	for (int i = 0; i < n; i++) {
		Dog temp;
		temp.setAge(rand() % 9 + 1);
		temp.setBreed(breeds[rand()%10]);
		temp.setID(rand()%90000 + 9999);
		temp.setName(names[rand() % 10]);
		randomDogs.push_back(temp); 
	}

	displayAllDogs(randomDogs); 


	return 0; 
}

Dog::Dog()
{
	setName("John Dog"); 
	setBreed("Mut");
	setAge(0); 
	setID(0); 
}

string Dog::getName(void)
{
	return name;
}

void Dog::setName(string arg)
{
	name = arg; 
}

string Dog::getBreed(void)
{
	return breed;
}

void Dog::setBreed(string arg)
{
	breed = arg; 
}

int Dog::getAge(void)
{
	return age;
}

void Dog::setAge(int arg)
{
	if (arg >= 0) {
		age = arg; 
	}
	else if(arg < 0) {
		age = arg * -1.0; 
	}
}

int Dog::getID(void)
{
	return ID;
}

void Dog::setID(int arg)
{
	if (arg > 9999) {
		ID = arg;
	}
	else if (arg <= 9998) {
		ID = 0; 
	}
}

void Dog::displayDog(void)
{
	cout << "\nID: " << getID() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Breed: " << getBreed() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Human Age: " << humanAge() << endl; 
}

int Dog::humanAge(void)
{
	return getAge() * 7;
}

void displayAllDogs(vector<Dog>& arg)
{
	for (int i = 0; i < arg.size(); i++) {
		cout << "Dog #" << i + 1; 
		arg[i].displayDog(); 
		cout << endl; 
	}
}
