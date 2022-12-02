#pragma once
#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;

class Rhomb
{
private:
	int sideA;
	int alpha;
public:
	Rhomb(int sideA, int alpha);
	double getArea();
	ostream& operator<< (ostream& ostream);
};
