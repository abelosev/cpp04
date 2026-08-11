#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & src) : type(src.type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & src) {
	if (this != &src)
		this->type = src.type;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "makes a sound" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::setType() {
	this->type = "Animal";
}