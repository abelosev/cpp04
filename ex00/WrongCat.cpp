#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;
	setType();
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	setType();
}

WrongCat & WrongCat::operator=(WrongCat const &src) {
	if (this != &src)
		WrongAnimal::operator=(src);
	return (*this); // не уверена
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "hellooo" << std::endl;
}

void WrongCat::setType() {
	this->type = "WrongCat";
}