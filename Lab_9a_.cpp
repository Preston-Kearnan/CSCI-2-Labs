//Preston Kearnan
//Lab_9a_ Vector_Strings
//

#include<iostream>
#include<vector>
#include<string>

using namespace std;

void printStrings(vector<string> arg);
string randomString(vector<string> arg);

int main(void) {

	vector<string> userStrings;
	srand(time(0));

	while (true) {
        cout << "Enter as many words as you'd like... press 'Enter' when you aer finished.  ";
        string result;
        getline(cin, result);

        if (result == "") {
            break;
        }

        userStrings.push_back(result);

        system("CLS");
    }

    printStrings(userStrings);
    cout << randomString(userStrings);

	return 0; 
}

void printStrings(vector<string> arg)
{
    cout << "<";

    for (int i = 0; i < arg.size(); i++) {
        cout << arg[i];

        if (i != arg.size() - 1) {
            cout << ",";
        } 
        else
        {
            cout << ">" << endl;
        }

    }
}

string randomString(vector<string> arg)
{
    return arg[rand() % arg.size()];
}
