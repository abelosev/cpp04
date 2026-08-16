#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string const & str) : Animal(str) {
	std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src){
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &src) {
	if (this != &src)
		Animal::operator=(src);
	return (*this); // не уверена
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() {
	std::cout << "Dog " << getName() << " barks" << std::endl;
}

std::string Dog::getName() const {
	return (this->_name);
}