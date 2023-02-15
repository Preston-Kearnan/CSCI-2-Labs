//Preston Kearnan
//Lab_Final Test
//12-24-22

#include<iostream>
#include<iomanip>
#include<vector>
#include<string>

using namespace std; 

class SavingsAccount{
private:
	string name;
	double amount;
	int accountNumber;
public:

	string getName(void);
	void setName(string arg); 
	double getAmount(void);
	void setAmount(double arg);
	int getAccountNumber(void);
	void setAccountNumber(int arg); 

	void displayAccount(void);
	double deposit(double arg); 
	double withdrawal(double arg);
};

void displayAccounts(vector<SavingsAccount> arg, int numAcc); 

int main(void) {
	srand(time(0)); 

	cout << "Part 1\n" << endl; 

	SavingsAccount myAccount;
	myAccount.setAccountNumber(94732); 
	myAccount.setAmount(1589.34);
	myAccount.setName("Preston Kearnan");

	myAccount.displayAccount();

	myAccount.deposit(234.54);
	
	myAccount.displayAccount();

	myAccount.withdrawal(67.42);
	 
	myAccount.displayAccount(); 

	cout << "\n\nPart 2\n" << endl; 

	vector<SavingsAccount> accounts; 
	int numAcc;

	string name[] = { "Bill", "Todd", "Emily" , "Lily" , "Sam" , "John", "Diego", "Sarah" };

	cout << "How many savings accounts would you like to add? ";
	cin >> numAcc; 

	for (int i = 0; i < numAcc; i++) {
		SavingsAccount temp; 
		temp.setAccountNumber(9999 + rand()%99999);
		temp.setAmount((rand()%200000)/100.0);
		temp.setName(name[rand()%8]); 
		accounts.push_back(temp); 
	}

	displayAccounts(accounts, numAcc); 

	return 0; 
}

string SavingsAccount::getName(void)
{
	return name;
}

void SavingsAccount::setName(string arg)
{
	name = arg; 
}

double SavingsAccount::getAmount(void)
{
	return amount;
}

void SavingsAccount::setAmount(double arg)
{
	if (arg >= 0) {
		amount = arg;
	}
	else if (arg < 0) {
		cout << "Invalid Input" << endl; 
	}
	
}

int SavingsAccount::getAccountNumber(void)
{
	return accountNumber;
}

void SavingsAccount::setAccountNumber(int arg)
{
	if (arg > 9999 && arg < 99999) {
		accountNumber = arg;
	}
	else if (arg <= 9999) {
		cout << "Invalid Input" << endl; 
	}
	else if (arg >= 99999 ) {
		accountNumber = arg - 9999; 
	}
}

void SavingsAccount::displayAccount(void)
{
	cout << "\nName: " << getName() << endl; 
	cout << "Account Number: " << getAccountNumber() << endl; 
	cout << "Amount: " << getAmount() << "$" << endl;
}

double SavingsAccount::deposit(double arg)
{
	amount = arg + amount;
	return amount;
}

double SavingsAccount::withdrawal(double arg)
{
	amount = amount - arg;
	return amount;
}

void displayAccounts(vector<SavingsAccount> arg, int numAcc)
{
	for (int i = 0; i < numAcc; i++) {
		arg[i].displayAccount(); 
	}
}
