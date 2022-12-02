#pragma once
#include "Circle.h"
#include "Rhomb.h"

class CircleInRhomb:public Circle, public Rhomb
{
public:
	CircleInRhomb(double radius, int sideA, int alpha);
	ostream& operator<< (ostream& ostream);
};
