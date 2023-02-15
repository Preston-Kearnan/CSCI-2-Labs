//Preston Kearnan
//In CLass Practice
//01-23-23

#include<iostream>
#include<iomanip>

using namespace std; 

template<typename T>

void printArray(T arg[], const int n); 

int main(void) {




	return 0; 
}

template<typename T>
void printArray(T arg[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arg[i] << endl; 
	}
}
