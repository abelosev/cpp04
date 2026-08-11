#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	setType();
}

Dog::Dog(Dog const &src) : Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	setType();
}

Dog & Dog::operator=(Dog const &src) {
	if (this != &src)
		Animal::operator=(src);
	return (*this); // не уверена
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "barks" << std::endl;
}

void Dog::setType() {
	this->type = "Dog";
}