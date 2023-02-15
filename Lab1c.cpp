//Preston Kearnan
//Lab_1c-Function-Templates
//01-23-23

#include<iostream>
#include<iomanip>

using namespace std; 

template <typename T>
T minElement(T arg1, T arg2);

template <typename T>
T maxElement(T arg1, T arg2);

int main(void) {

	int x = 1;
	int y = 2; 
	double a = 5.5;
	double b = 6.6; 
	char One = 'a';
	char Two = 'b'; 
	string name1 = "Preston";
	string name2 = "Roan"; 

	cout << "Min: " << minElement(x, y) << endl;
	cout << "Max: " << maxElement(x, y) << endl;
	cout << "Min: " << minElement(a, b) << endl;
	cout << "Max: " << maxElement(a, b) << endl;
	cout << "Min: " << minElement(One, Two) << endl;
	cout << "Max: " << maxElement(One, Two) << endl;
	cout << "Min: " << minElement(name1, name2) << endl;
	cout << "Max: " << maxElement(name1, name2) << endl;
	return 0; 
}

template<typename T>
T minElement(T arg1, T arg2)
{
	if (arg1 > arg2) {
		return arg2;
	}
	else if (arg2 > arg1) {
		return arg1; 
	}
}

template<typename T>
T maxElement(T arg1, T arg2)
{
	if (arg1 > arg2) {
		return arg1;
	}
	else if (arg2 > arg1) {
		return arg2;
	}
}
