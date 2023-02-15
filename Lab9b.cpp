//Preston Kearnan
//Lab_9b_Vector Search
//

#include<iostream>
#include<vector>
#include<string>

using namespace std; 

int searchVector(vector<string> vecArg, string target);

int main(void) {

	string userR = "y";
	vector<string> myStrings = {"John" , "Bob" , "Bill" , "Roan", "Andy" , "Jason" , "Tom" , "Jim" , "Alex" , "Preston"};

	for (int i = 0; i < myStrings.size(); i++) {
		cout << myStrings[i] << endl; 
	}
	do {
		string x;
		cout << "\nPlease enter a word you would like to search the vector for: "; 
		getline(cin, x);

		cout << searchVector(myStrings, x);

		cout << "\nWould you like to search the vector again? (y/n): "; 
		getline(cin, userR); 
		
	} while (userR == "y");

	return 0; 
}

int searchVector(vector<string> vecArg, string target)
{
	int miss = 0; 
	for (int i = 0; i < vecArg.size(); i++) {
		if (target == vecArg[i]) {
			cout << "Found the word! At index number: "; 
			return i; 
		}
		else {
			miss++; 
		}
	}
	if (miss == vecArg.size()) {
		cout << "Not Found." << endl; 
		return -1; 
	}
}
