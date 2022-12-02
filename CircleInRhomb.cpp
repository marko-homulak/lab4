#include "CircleInRhomb.h"

CircleInRhomb::CircleInRhomb(double radius, int sideA, int alpha) : Circle(radius), Rhomb(sideA, alpha)
{
	
}

ostream& CircleInRhomb::operator<<(ostream& ostream)
{
	this->Circle::operator<< (ostream);
	ostream << endl;
	this->Rhomb::operator<< (ostream);
	return ostream;
}
