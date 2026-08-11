#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	setType();
}

Cat::Cat(Cat const &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	setType();
}

Cat & Cat::operator=(Cat const &src) {
	if (this != &src)
		Animal::operator=(src);
	return (*this); // не уверена
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meows" << std::endl;
}

void Cat::setType() {
	this->type = "Cat";
}