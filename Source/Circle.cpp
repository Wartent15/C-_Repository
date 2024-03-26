#include "Circle.h"


Circle::Circle(std::string name, std::string color, int radius) : Shape(name, color) {
	this->radius = radius;
}


double Circle::area() {
	return 3.14 * this->radius * this->radius;
}