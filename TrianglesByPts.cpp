//Preston Kearnan
//In Class triangle OOD Compisition
// 

#include<iostream>
#include<cmath>
#include<vector>
#include<cstdlib> 

using namespace std; 

struct Point {
	//dependency on cmath 
	double x, y; 

	Point(void); 
	Point(double argX, double argY); 
	void display(void); 
	double distanceTo(Point arg); 

};

class Triangle {
private:
	Point p1, p2, p3; 
public:
	Triangle(Point argP1, Point argP2, Point argP3);

	void setP3(Point argP3);
	Point getP3(void);



	
	void display(void); 
	double perimeter(void);
	double area(void); 
};

void displayAllTriangles(vector<Triangle>& arg); 

int main(void) {
	srand(time(0)); 

	//Lab part 1

	/*Point x;
	Point y;
	Point z;  

	Triangle myTri(x, y, z); 
	myTri.display(); 

	cout << "\n *********" << endl; 

	cout << myTri.perimeter() << endl; 
	cout << myTri.area() << endl; */


	//Lab part 2

	int size = 500; 
	vector<Triangle> myVec;

	for (int i = 0; i < size; i++) {
		Point a, b, c; 
		Triangle temp(a, b, c); 
		myVec.push_back(temp); 
	}
	
	displayAllTriangles(myVec); 
	return 0; 
}

Point::Point(void)
{
	x = rand() % 10;
	y = rand() % 10; 
}

Point::Point(double argX, double argY)
{
	x = argX;
	y = argY; 
}

void Point::display(void)
{
	cout << "(" << x << "," << y << ")";
}

double Point::distanceTo(Point arg)
{
	double temp = pow((arg.x - x), 2) + pow((arg.y - y), 2); 
	return sqrt(temp);
}

Triangle::Triangle(Point argP1, Point argP2, Point argP3)
{
	setP1(argP1); 
	setP2(argP2);
	setP3(argP3); 
}

void Triangle::display(void)
{
	p1.display();
	cout << " - ";
	p2.display();
	cout << " - ";
	p3.display();
}

double Triangle::perimeter(void)
{
	return (getP1().distanceTo(getP2()) + getP2().distanceTo(getP3()) + getP3().distanceTo(getP1()));
}

double Triangle::area(void)
{
	double s = (p1.distanceTo(p2) + p2.distanceTo(p3) + p3.distanceTo(p1)); 
	return sqrt(s * ( s - p1.distanceTo(p2) )* ( s - p2.distanceTo(p3) )* (s - p3.distanceTo(p1)));
}

void Triangle::setP1(Point argP1)
{
	p1 = argP1; 
}

Point Triangle::getP1(void)
{
	return p1;
}

void Triangle::setP2(Point argP2)
{
	p2 = argP2; 
}

Point Triangle::getP2(void)
{
	return p2;
}

void Triangle::setP3(Point argP3)
{
	p3 = argP3; 
}

Point Triangle::getP3(void)
{
	return p3;
}

void displayAllTriangles(vector<Triangle>& arg)
{
	for (int i = 0; i < arg.size(); i++) {
		cout << "Triangle: " << i + 1;
		arg[i].display(); 
		cout << endl; 
	}
}
