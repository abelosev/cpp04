#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const & name) : _name(name) {
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(Animal const & src) : _name(src._name) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & src) {
	if (this != &src)
		this->_name = src._name;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() {
	std::cout << "some animal sound" << std::endl;
}

void printSound(Animal &src) {
	src.makeSound();
}