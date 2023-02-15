//Preston Kearnan
//Lab_Muliplication quiz
//12-12-22

#include<iostream>
#include<iomanip>
#include<ctime> 

using namespace std; 

bool printProblem(void);
void printGrade(double arg);

int main(void) {
	srand(time(0));
	char userR = 'y'; 
	int numOfProbs = 10; 
	int correct = 0;

	cout << "Practice Your Multiplication!!!" << endl; 

	do {
		for (int i = 0; i < numOfProbs; i++) {
			if (printProblem() == true) {
				correct++;
			}
			cout << "Percentage Correct So Far: " << fixed << setprecision(2) << (100.0*correct/(i+1)) << "%" << endl;
		} 

		double percent = (1.0 * correct / numOfProbs) * 100; 

		printGrade(percent);

		cout << "\n\nWould you like to play again? (y/n)";
		cin >> userR; 
	} while (userR == 'y');

	return 0; 
}

bool printProblem(void)
{
		int a = 1 + rand() % 10;
		int b = 1 + rand() % 10;
		int c; 
		cout << "\n" << a << " * " << b << " = ";
		cin >> c; 
		if (c == a * b) {
			cout << "Good job!" << endl; 
			return true; 
		}
		else {
			cout << "Sorry, That's not quite it!" << endl; 
			return false; 
		}
}


void printGrade(double arg)
{
	cout << "\n\nPercent Correct: " << arg << "%\n";

	if (arg >= 90) {
		cout << "Letter Grade: A";
	}else if(arg >= 80) {
		cout << "Letter Grade: B";
	}else if(arg >= 70) {
		cout << "Letter Grade: C";
	}else if(arg >= 60) {
		cout << "Letter Grade: D";
	}else if(arg >= 50) {
		cout << "Letter Grade: F";
	}
}
