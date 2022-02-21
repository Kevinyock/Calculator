#include "Circles.h"
#include <cmath>


Circles::Circles()
{
	radius = r;
}

float Circles::Circumference(double r)
{
	return (2 * pi) * r;
}
float Circles::AreaOfCircle(double r)
{
	return pi * pow(r, 2);
}

Circles::~Circles()
{
}
