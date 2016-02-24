/*
 Functions Definitions and prototypes
 */
#include<iostream>
#include"termcolor.hpp"
#include<math.h>

using namespace std;

void draw(char matrix[][20]){
	using namespace std;
	cout << sizeof(matrix) << endl << endl;
	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 50; x++) {
			if (y == 19 || x == 0){
				cout << termcolor::on_green << matrix[x][y];	
			}else if (matrix[x][y] == 'O'){
				cout << termcolor::on_red << matrix[x][y];
			}else{
				cout << termcolor::reset << matrix[x][y];
			}

		}
		cout << endl;
	}
	cout << termcolor::reset << endl;
};
void populateMatrix(char matrix[][20]){
	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 50; x++) {
			matrix[x][y] = 'x';
		}
	}

};
void circle2(int xAxis, int yAxis, int radius, char matrix[][20]){
	yAxis = 19 - yAxis; //wrap the y-axis so the bottom is the init
	for (int y = 0; y < 20; y++) {
		for (int x = 0; x < 50; x++) {
			double radioMatch = sqrt(((x - xAxis)*(x - xAxis)) + ((y - yAxis)*(y - yAxis)));
			if (radioMatch > radius - 0.5 && radioMatch < radius + 0.5){
				matrix[x][y] = 'O';
			}else if(xAxis == x && yAxis == y){
			matrix[x][y] = 'O';
			}
		}
		
	}
};
