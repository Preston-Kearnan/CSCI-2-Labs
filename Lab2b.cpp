//Preston Kearnan
//Lab_2b_ Binary Search
//

#include<iostream>
#include<iomanip>

using namespace std; 

int binarySearch(const string anArray[], int first, int last, string target) {

	int index;
	if (first > last)
		index = -1;
	else {
		int mid = first + (last - first) / 2;
		if (target == anArray[mid])
			index = mid;
		else if (target < anArray[mid])
			index = binarySearch(anArray, first, mid - 1, target);
		else
			index = binarySearch(anArray, mid + 1, last, target);
	}

	return(index);
}

int main(void) {

	string a[] = { "Apple", "Bacon", "Candy", "Donut" , "Eel" ,"Fries", "Gator"};

	cout << binarySearch(a, 0, 6, "Bacon");


	return 0; 
}