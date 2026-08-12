#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) : type(src.type) {
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & src) {
	if (this != &src)
		this->type = src.type;
	std::cout << "AAnimal assignment operator called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const {
	return (this->type);
}