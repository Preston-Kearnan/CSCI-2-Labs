//Preston Kearnan
//Lab_1a

#include<iostream>
#include<iomanip>

using namespace std; 

void printArray(char arg[], const int size);
void printArrayPTR(char* arg, const int size); 

int main(void) {
	srand(time(0)); 

	const int size = 15; 
	char a[size]; 

	for (int i = 0; i < size; i++) {
		a[i] = char(97 + rand() % 26);
	}

	printArray(a, size); 
	cout << "----" << endl; 
	printArrayPTR(a, size); 

	return 0; 
}

void printArray(char arg[], const int size) {

	for (int i = 0; i < size; i++) {
		cout << arg[i] << " has address " << int(&arg[i]) << endl;
	}
}
void printArrayPTR(char* arg, const int size)
{
	for (int i = 0; i < size; i++) {
		cout << *(arg + i) << " has address " << int(arg + i) << endl;
	}
}
