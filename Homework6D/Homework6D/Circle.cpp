///////////////////////////
//Morgan Sherve
//Exercise 14.3
//June 13, 2014
////////////////////


#include <iostream>
#include "Circle.h"

using namespace std;

int Circle:: numberOfObjects = 0;

Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

//circle object
Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

//area
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius() const
{
	return radius;
}

// Set a new radius
void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

//total objects
int Circle::getNumberOfObjects()
{
	return numberOfObjects;
}

//order radius
bool Circle:: operator <(Circle& order)
{
	return getRadius() < order.getRadius();
}





int main()
{
	Circle circle1;

	cout << "The area of the circle of radius " << circle1.getRadius() << " is " << circle1.getArea() << endl;

	return 0;
}