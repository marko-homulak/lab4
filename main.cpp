#include "CircleInRhomb.h"
#include <fstream>
#include <iostream>

int main()
{
	double radius;
	int sideA;
	int alpha;

	cout << "Enter the side of the rhombus >> ";
	cin >> sideA;
	cout << "Enter the acute angle of the rhombus >> ";
	cin >> alpha;

	system("cls");

	radius = (pow(sideA, 2) * sin((alpha * M_PI) / 180)) / 2 * sideA;

	CircleInRhomb cinr(radius, sideA, alpha);
	cinr.operator<< (cout) << endl;
	ofstream myfile;
	myfile.open("CircleInRhomb.txt");
	cinr.operator<< (myfile);
	myfile.close();
}
