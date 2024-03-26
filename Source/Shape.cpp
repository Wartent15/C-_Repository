#include "Shape.h"


Shape::Shape(std::string name, std::string color) {
	this->name = name;
	this->color = color;
}


void Shape::info() {
	std::cout << "Hello" << std::endl;
}