//Preston Kearnan
//Lab_8b
//Triangles with methods

#include<iostream>
#include<iomanip>

using namespace std; 
	struct Triangle {

		string color;
		float sideA;
		float sideB;
		float sideC;

		void printProperties(void);
		double area(void);
		double perimeter(void);
	};

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
					triangles[i].sideA = a;
					triangles[i].sideB = b;
					triangles[i].sideC = c;
					triangles[i].color = color[rand() % 5];
					break;
				}
			}
		}

		for (int i = 0; i < size; i++) {
			triangles[i].printProperties();
			cout << "Perimeter: " << triangles[i].perimeter() << endl; 
			cout << "Area: " << triangles[i].area() << endl; 
			cout << "\n*************" << endl; 
		}

		return(0);
	}


	void Triangle::printProperties(void)
	{
		cout << " Color: " << color << endl;
		cout << " Side C: " << sideA << endl;
		cout << " Side B: " << sideB << endl;
		cout << " Side A: " << sideC << endl;
	}

	double Triangle::area(void)
	{
		double s = (sideA + sideB + sideC) / 2; 
		return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	}

	double Triangle::perimeter(void)
	{
		return (sideA + sideB + sideC); 
	}
