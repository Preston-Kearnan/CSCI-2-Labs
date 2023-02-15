//Preston Kearnan
//Lab_2e_Array Delete Function
//

#include<iostream>
#include<iomanip>

using namespace std;

template<typename T>
void deleteElement(T* arr, int index, int size); 

template<typename T>
void printArray(T arg[], const int size);

int main(void) {

	const int n = 10;
	int a[n]; 

	for (int i = 0; i < n; i++) {
		a[i] = rand(); 
	}

	printArray(a, n); 
	deleteElement(a, 3, n); 

	return 0; 
}

template<typename T>
void deleteElement(T* arr, int index, int size)
{
	for (int i = index; i < size - 1; i++) {
			arr[i] = arr[i + 1]; 
	 }
	
	arr[size - 1] = '\0';

	printArray(arr, size); 
}

template<typename T>
void printArray(T arg[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << " Index " << i << " contains " << arg[i] <<endl;
	}
}
