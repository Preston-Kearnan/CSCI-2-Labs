//Preston Kearnan
//Lab_
//

#include<iostream>
#include<iomanip>
#include<string>

using namespace std; 

struct Student {
	string firstName;
	string lastName;
	string school;
	float GPA;
};

void printStudent(Student arg[], const int size);

void capitalize(Student& arg); //if we dont use the & character we would pass by value instead of reference meaning we risk changing the information in the actual array itself

int main(void) {

	const int size = 3; 
	Student a[3]; 

	cout << "This Program Capitializes and returns entered student information." << endl; 

	for (int i = 0; i < size; i++) {

		cout << "\nPlease Enter the student's first name: ";
		getline(cin, a[i].firstName);

		cout << "Please Enter the student's Last Name: ";
		getline(cin, a[i].lastName);

		cout << "Please Enter the Schools's Name: ";
		getline(cin, a[i].school);

		cout << "Please Enter the student's GPA: ";
		cin >> a[i].GPA;

		cin.ignore(); 
	}
	
	for (int i = 0; i < size; i++) {
		capitalize(a[i]);
	}
	printStudent(a, size);

	return 0; 
}

void printStudent(Student arg[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << arg[i].firstName << endl; 
		cout << arg[i].lastName << endl; 
		cout << arg[i].school << endl; 
		cout << arg[i].GPA << endl; 
		cout << "\n*************\n";
	}
}

void capitalize(Student& arg)
{
	arg.firstName[0] = toupper(arg.firstName[0]);
	arg.lastName[0] = toupper(arg.lastName[0]);
	arg.school[0] = toupper(arg.school[0]);
}
	
