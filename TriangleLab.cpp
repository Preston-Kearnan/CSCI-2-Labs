//Preston Kearnan
//Lab_
//

#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std; 

struct Triangle {

	string color; 
	float sideA;
	float sideB;
	float sideC; 

};

void printTriangles(Triangle arg[], const int size);

int main(void) {

	srand(time(0)); 
	
	const int size = 50; 
	Triangle triangles[size]; 

	int a, b, c; 
	

	string color[5] = { "Red" , "Blue" , "Green", "Orange" , "Purple" }; 

	for (int i = 0; i < size; i++) {

		while (true) {

			a = rand() % 11 + 1.0 * rand() / RAND_MAX;
			b = rand() % 11 + 1.0 * rand() / RAND_MAX;
			c = rand() % 11 + 1.0 * rand() / RAND_MAX;

			if (a + b > c && a + c > b && b + c > a) {
				triangles[i].sideA= a;
				triangles[i].sideB = b;
				triangles[i].sideC = c; 
				triangles[i].color = color[rand() % 5];
				break; 
			}
		}
	}
	
	printTriangles(triangles, size); 

	return(0);
}

void printTriangles(Triangle arg[], const int size)
{ 

	for (int i = 0; i < size; i++) {
		double perimeter = (arg[i].sideA + arg[i].sideB + arg[i].sideC); 
		double s = perimeter / 2; 
		double area = sqrt(s * (s - arg[i].sideA) * (s - arg[i].sideB) * (s - arg[i].sideC)); 
		cout << " Color: " << arg[i].color << endl;
		cout << " Side C: " << arg[i].sideA << endl;
		cout << " Side B: " << arg[i].sideB << endl;
		cout << " Side A: " << arg[i].sideC << endl;
		cout << "Perimeter: " << perimeter << endl;
		cout << "Area: " << area << endl; 
		cout << "\n************" << endl; 
	}
}

