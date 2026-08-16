#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	setType();
}

Cat::Cat(Cat const &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &src) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &src) {
        Animal::operator=(src);
    }
    return (*this);
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
