//Preston Kearnan
//Lab_1d_ Student Grading
//01-25-23

#include<iostream>
#include<iomanip>
#include<string> 


using namespace std; 

template<class T>
struct Student {
	string name;
	int ID;
	T testAvg, hwAvg, finalAvg;
	float testWeight, hwWeight, finalWeight;

	void display(void);
	double calculateWeightedAverage(void);
	char getGrade(void);
};


int main(void) {

	char userR = 'y';

	Student<double> student;

	do {

		system("cls"); 

		cout << "Student Grading App!" << endl; 

		cout << "\nPlease Enter student name: ";
		getline(cin, student.name);

		cout << "\nPlease Enter the student's ID: ";
		cin >> student.ID;

		cout << "\nPlease Enter student's Average Test Score: ";
		cin >> student.testAvg;

		cout << "\nPlease Enter the percentage weight of the Tests: ";
		cin >> student.testWeight;

		cout << "\nPlease Enter the student's Average Homework Score: ";
		cin >> student.hwAvg;

		cout << "\nPlease Enter the percentage weight of the Homework: ";
		cin >> student.hwWeight;

		cout << "\nPlease Enter the student's Average Final Score: ";
		cin >> student.finalAvg;

		cout << "\nPlease Enter the percentage weight of the Final: ";
		cin >> student.finalWeight;
		
		system("cls"); 

		student.display();

		cout << "\nWould you like to Calculate another grade average? (y/n): ";
		cin >> userR; 

		cin.ignore(); 

	} while (userR == 'y');

	return 0; 
}

template<class T>
void Student<T>::display(void)
{
	cout << "Name: " << name << endl; 
	cout << "Student ID: " << ID << endl;
	cout << "Average Test Score: " << testAvg  << "%" << endl;
	cout << "Test Score Weight: " << testWeight << "%" << endl;
	cout << "Average Homework Score: " << hwAvg << "%" << endl;
	cout << "Homework Score Weight: " << hwWeight << "%" << endl;
	cout << "Average Final Score: " << finalAvg << "%" << endl;
	cout << "Final Score Weight: " << finalWeight << "%" << endl;
	cout << "Calculated Average: " << calculateWeightedAverage() << "%" << endl;
	if ((testWeight + hwWeight + finalWeight) == 100) {
		cout << "Letter Grade: " << getGrade();
	}
}

template<class T>
double Student<T>::calculateWeightedAverage(void)
{
	if ((testWeight + hwWeight + finalWeight) == 100) {
		return ((testAvg * testWeight) + (hwAvg * hwWeight) + (finalAvg * finalWeight))/100.0;
	}
	else {
		cout << "Please make sure your weighted percentages add up to 100%. :)";
	}
}

template<class T>
char Student<T>::getGrade(void)
{
	if (calculateWeightedAverage() >= 90.0) {
		return 'A';
	}
	else if (calculateWeightedAverage() >= 80.0) {
		return 'B';
	}
	else if (calculateWeightedAverage() >= 70.0) {
		return 'C';
	}
	else if (calculateWeightedAverage() >= 60.0) {
		return 'D';
	}
	else if (calculateWeightedAverage() >= 50.0) {
		return 'F'; 
	}
}
