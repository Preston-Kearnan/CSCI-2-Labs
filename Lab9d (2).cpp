//Preston Kearnan
//Lab_9d
//Model Lines with points

#include<iostream>
#include<iomanip>
#include<cmath>
#include "Point.h";
#include "Line.h";

using namespace std;

int main(void) {

	Line myLine; 
	Point x; 
	Point y; 
	x.x = 4; 
	x.y = 6;
	y.x = 7;
	y.y = 3; 

	myLine.setP1(x); 
	myLine.setP2(y);

	
	cout << " Slope: " << myLine.slope() << endl;

	myLine.display();
	cout << endl; 

	cout << " Evaluated at x = 4 : " << myLine.evaluate(4);

	return 0; 
}


