//Preston Kearnan
//Lab_
//

#include<iostream>
#include<iomanip>
#include<string>

using namespace std; 

class ROT {
	private:
		string message; 
		int n; 
	public:
		ROT(); 
		ROT (string argM); 

		string getMesaage(void);
		void setMessage(string argM);
		int getN(void); 
		void setN(int argN); 

		string encode(void); 
		string decode(void); 
};

int main(void) {

	string x; 
	cout << "PLease enter the phrase you want encoded: ";
	getline(cin , x);

	ROT y(x); 
	y.setN(13); 

	y.encode();  

	return 0; 
}

ROT::ROT()
{
	message = ' ';
	n = 0;
}

ROT::ROT(string argM)
{
	message = argM; 
}

string ROT::getMesaage(void)
{
	return message;
}

void ROT::setMessage(string argM)
{
	message = argM; 
}

int ROT::getN(void)
{
	return n; 
}

void ROT::setN(int argN)
{
	n = argN; 
}

string ROT::encode(void)
{
	string input; 

	remove(message.begin(), message.end(), ' '); //despace
	remove(message.begin(), message.end(), '.'); 
	remove(message.begin(), message.end(), '?');
	remove(message.begin(), message.end(), '!');
	remove(message.begin(), message.end(), ',');

	input = message; 

	for (int i = 0; i < input.size(); i++) { //lower caps
			input[i] = tolower(input[i]);
	}

	for (int i = 0; i < input.size(); i++) {  //97 - 122, ascii val plus n > 122 then do soemthing, less than do different 
			if (i % 5 == 0) 
			cout << "-";
			if (input[i] + n <= 122)
				cout << char(int(input[i]) + n);
			else if (input[i] + n > 122)
				cout << char((int(input[i]) - 26 )+ n); 
	}
	return input;
}

string ROT::decode(void)
{
	for (int i = 0; i < message.size(); i++) {  //97 - 122, ascii val plus n > 122 then do soemthing, less than do different 
		if (i % 5 == 0)
			cout << "-";
		if (message[i] - n >= 97)
			cout << char(int(message[i]) - n);
		else if (message[i] - n < 97)
			cout << char((int(message[i]) + 26) - n);
	}
	return message; 
}

/**/
