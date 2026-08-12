#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	setType();
	this->brain = new Brain();
	brain->setIdeas("Let me sleep");
}

Cat::Cat(Cat const &src) : Animal(src), brain(new Brain(*src.brain)) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &src) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &src) {
		Animal::operator=(src);
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return (*this);
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "meows" << std::endl;
}

void Cat::setType() {
	this->type = "Cat";
}

Brain *Cat::getBrain() const {
	return (this->brain);
}