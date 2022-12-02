#include "Circle.h"

Circle::Circle(double r)
{
	this->r = r;
}

double Circle::getArea()
{
	return pow(r, 2) * M_PI;
}

double Circle::getLength()
{
	return 2 * M_PI * r;
}

ostream& Circle::operator<<(ostream& ostream)
{
	ostream << "Circle radius = " << r << endl
		<< "Circle area = " << this->getArea() << endl
		<< "Circle length = " << this->getLength() << endl;
	return ostream;
}
