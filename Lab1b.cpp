//Preston Kearnan
//Lab_1b
//Reusable Functions

#include<iostream>
#include<iomanip>
#include<vector>

using namespace std; 

void printVector(vector<int> vector);
void printVectorAddress(vector<int> vector);

int main(void) {

	vector<int> numbers = { 3,4,7,8,0 }; 

	printVector(numbers); 
	printVectorAddress(numbers); 

	return 0; 
}

void printVector(vector<int> vector) {
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << endl;
	}
}

void printVectorAddress(vector<int> vector)
{
	for (int i = 0; i < vector.size(); i++) {
		cout << vector[i] << " with address: " << &vector[i] << endl;
	}
}

