//Preston Kearnan
//Lab_9c_Linear Lines
//

#include<iostream>
#include<iomanip>
#include <vector> 

using namespace std; 

class Line {
	private:
		double m, b; 
	public:
		Line(double argM = 0.0, double argB = 0.0);

		void setM(double argM);
		double getM(void); 
		void setB(double argB);
		double getB(void); 

		void displayLine(void); 
		void displayYint(void); 
		void displayXint(void);
		double evaluate(double argX); 
};

int main(void) {

	vector <Line> mylines; 

	Line x;
	x.setM(3);
	x.setB(2); 
	Line x2;
	x2.setM(1);
	x2.setB(6);
	Line x3; 
	x3.setM(4); 
	x3.setB(2);
	Line x4;
	x4.setM(2);
	x4.setB(3); 
	Line x5;
	x5.setM(5);
	x5.setB(1); 

	mylines.push_back(x);
	mylines.push_back(x2);
	mylines.push_back(x3);
	mylines.push_back(x4);
	mylines.push_back(x5);

	
	
	for (int i = 0; i < mylines.size(); i++) {
		mylines[i].displayLine(); 
		mylines[i].evaluate(5); 
	}

	

	return 0; 
}

Line::Line(double argM, double argB)
{
	setM(argM);
	setB(argB);
}

void Line::setM(double argM)
{
	m = argM; 
}

double Line::getM(void)
{
	return m;
}

void Line::setB(double argB)
{
	b = argB;
}

double Line::getB(void)
{
	return b;
}

void Line::displayLine(void)
{
	cout << "y = " << getM() << "x + " << getB() << endl;
}

void Line::displayYint(void)
{
	cout << " y - int: (0," << getB() << ")" << endl; 
}

void Line::displayXint(void)
{
	cout << " x - int: (" << -1 * getB() / getM() << ",0)" << endl;
}

double Line::evaluate(double argX)
{
	return (getM() * argX + getB());
}

