//Preston Kearnan
//Lab_11a Bubble sort
// 11-28-22

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std; 

void swap(int& argX, int& argY);
void printArray(int arg[], const int size); 
int bubbleSort(int arg[], const int size); 

int main(void) {
	srand(time(0));
		
	const int n = 10;
	int a[n];
	int plays = 500000;

	for (int i = 0; i < n; i++) {
		a[i] =  rand() % 51;
	}

	double num = 0.0;
	for (int i = 0; i < plays; i++) {

		for (int i = 0; i < n; i++) {
			a[i] =  rand() % 51;
		}
		num += 1.0 * bubbleSort(a, n);
	}

	double average = num / plays;

	cout << "Average: " << average;
	return 0; 
}

void swap(int& argX, int& argY)
{
	int temp = argX;
	argX = argY;
	argY = temp; 

}

void printArray(int arg[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << arg[i] << " ";
	}
	cout << endl; 
}

int bubbleSort(int arg[], const int size)
{
	bool swapped; 
	int count = 0;
	int pass = 0;

	do {
		swapped = false;
		//each pass
		for (int i = 1; i < size - pass; i++) {
			count++;

			count++;
			if (arg[i - 1] > arg[i]) {
				swap(arg[i - 1], arg[i]);
				swapped = true;
			}
		}
		count++;
		pass++;
		count++;
	} while (swapped == true);
	return count; 
}
