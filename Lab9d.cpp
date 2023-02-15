
#include<iostream>
#include "Line.h";
#include "Point.h"; 

using namespace std;

Line::Line()
{
}

void Line::setP1(Point argP1)
{
	p1 = argP1;
}

Point Line::getP1(void)
{
	return p1;
}

void Line::setP2(Point argP2)
{
	p2 = argP2;
}

Point Line::getP2(void)
{
	return p2;
}

double Line::slope(void)
{
	return (p2.y - p1.y) / (p2.x - p1.x);
}

void Line::display(void)
{
	double temp;
	temp = (p1.y - (slope() * p1.x));
	cout << " y =" << slope() << "x + " << temp << endl;
}

double Line::evaluate(double arg)
{
	return slope() * arg + (p1.y - (slope() * p1.x));
}
