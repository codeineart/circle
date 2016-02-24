#include<iostream>
#include<cstdlib>
#include<functions.h>
#include<cstddef>

int main(int argc, const char *argv[])
{ 
	using namespace std;
	cout << "Enter a Coordinate and radius:" << endl ;
	cout << "x:";
	int xCor = 0;
	cin >> xCor;
	cout << "Y:";
	int yCor = 0;	
	cin >> yCor;
	cout << "radius:";
	int radius = 0;
	cin >> radius;
	cout << "Point A -> (" << xCor << ", "; 
	cout << yCor << ")" << endl;
	cout << "Radius: " << radius << endl;
	char matrix[50][20];
	populateMatrix(matrix);
	circle2(xCor, yCor, radius, matrix);
	draw(matrix);




	return EXIT_SUCCESS;
}
