#pragma once
#include <iostream>
#include <string>
#define M_PI 3.14159265358979323846

using namespace std;

class Circle
{
private:
	double r;
public:
	Circle(double r);
	double getArea();
	double getLength();
	ostream& operator<< (ostream& ostream);
};
