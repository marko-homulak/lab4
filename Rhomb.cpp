#include "Rhomb.h"

Rhomb::Rhomb(int sideA, int alpha)
{
	this->sideA = sideA;
	this->alpha = alpha;
}

double Rhomb::getArea()
{
	return pow(sideA, 2) * sin((alpha * M_PI) / 180);
}

ostream& Rhomb::operator<<(ostream& ostream)
{
	ostream << "Side a = " << sideA << endl
		<< "Angle alpha = " << alpha << endl
		<< "Rhomb area = " << this->getArea() << endl;
	return ostream;
}
