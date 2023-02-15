//simple app template
#include <iostream>
#include<iomanip>
#include<ctime>
using namespace std;


int maxInteger(int a[], int size);
int minInteger(int a[], int size);

int main(void) {
    srand(time(0));

    cout << "This Program returns the max and min amounts from a 20 randomly generated integars..." << endl;
    const int size = 20;
    int randomNums[size];

    for (int i = 0; i < size; i++) {
        randomNums[i] = 1 + rand() % 1000;
    }

    cout << maxInteger(randomNums, size) << endl; 
    cout << minInteger(randomNums, size) << endl; 

    return 0;
}

int maxInteger(int a[], const int size)
{
    int king = 0; 
    for (int i = 0; i < size; i++ ) {
        if (a[i] > king) {
            king = a[i];
        }
        else {}
    }
    return king;
}

int minInteger(int a[], int size)
{
    int baby = 1000;
    for (int i = 0; i < size; i++) {
        if (a[i] < baby) {
            baby = a[i];
        }
        else {}
    }
    return baby;
}
