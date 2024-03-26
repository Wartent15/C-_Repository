#include <iostream>
#include "Circle.h"


int main() {
	Circle c("circle", "red", 4.8);
	std::cout << c.area() << std::endl;
}