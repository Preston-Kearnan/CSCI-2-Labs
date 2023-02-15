//Preston Kearnan
//Lab_Tweet
//

#include<iostream>
#include<iomanip>
#include<string>
#include<ctime>
#include<vector>

using namespace std; 

class Tweet {

private:
	string author, message;
	int timeStamp; 
	int likes;

public:
	Tweet(); 

	void setAuthor(string argA);
	void setMessage(string argM); 
	string getAuthor(void); 
	string getMessage(void); 
	int getTimeStamp(void); 
	int getLikes(void); 

	void display(void);
	void messagetoLower(void);
	void incrementLikes(void);
};

void displayDataBase(vector<Tweet>& arg);

int main(void) {

	char playAgain; 
	string userR;
	string userN;
	const int n = 100; 

	vector<Tweet> dataBase; 

	for (int i = 0; i < n; i++) {
		Tweet temp; 
		dataBase.push_back(temp);
	}

	do {
		cout << "Enter a Tweet: ";
		getline(cin, userR);

		cout << "Enter your name: ";
		getline(cin, userN);

		Tweet userT;
		userT.setMessage(userR);
		userT.setAuthor(userN);


		dataBase.push_back(userT);


		displayDataBase(dataBase);


		cout << "Would you like to Tweet Again? (y/n)";
		cin >> playAgain; 
		cin.ignore(); 
	} while (playAgain == 'y');

	return 0; 
}

Tweet::Tweet()
{
	setMessage("default");
	setAuthor("John Doe");
	timeStamp = time(0);
	likes = 0; 
}

string Tweet::getAuthor(void)
{
	return author; 
}

string Tweet::getMessage(void) 
{
	return message; 
}

int Tweet::getTimeStamp(void) 
{
	return timeStamp; 
}

int Tweet::getLikes(void)
{
	return likes;
}

void Tweet::setAuthor(string argA)
{
	author = argA;
}

void Tweet::setMessage(string argM)
{ 
	argM.resize(140);
	message = argM;
	messagetoLower();
} 

void Tweet::incrementLikes(void)
{
	likes++;
}

void Tweet::display() //try to look in "get" problem
{
	cout << "Tweet: " << getMessage() << endl;
	cout << "By: " << getAuthor() << " at " << getTimeStamp() << endl;
	cout << "Likes: " << getLikes() << endl; 
}

void Tweet::messagetoLower()
{
	for (int i = 0; i < getMessage().size(); i++) {
		message[i] = tolower(message[i]); 
	}
	message[0] = toupper(message[0]); 
}

void displayDataBase(vector<Tweet>& arg)
{
	for (int i = 0; i < arg.size(); i++) {
		arg[i].display();
		cout << " \n___________" << endl;
	}
}
