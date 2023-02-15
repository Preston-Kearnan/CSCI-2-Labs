//Preston Kearnan
//Lab_
//

#include<iostream>
#include<iomanip>
#include<string>


using namespace std; 

void printDashes(string arg); 
void printBackwardsDashes(string arg); 
void printUserString(string arg[], const int size); 

int main(void) {
	
	string words = "This is a string!";

	printDashes(words); 
	printBackwardsDashes(words); 

	const int size = 5; 

	string userStrings[size]; 

	for (int i = 0; i < size; i++) {
		cout << "Please insert a random word: ";
		getline(cin, userStrings[i]);
	}

	printUserString(userStrings, 5); 


	return 0;
}

void printDashes(string arg)
{
	for (int i = 0; i < arg.size(); i++) {
		cout << arg[i] << "-"; 
	}
	cout << endl; 
}

void printBackwardsDashes(string arg)
{
	for (int i = arg.size(); i >= 0; i--) {
		cout << arg[i] << "-";
	}
	cout << endl; 
}

void printUserString(string arg[], const int size)
{
	for (int i = 0; i < size; i++) {
		for (int u = 0; u < arg[i].size() ; u++) {
			cout << arg[i][u] << "*";
		}
	}
}




