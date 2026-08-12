#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal() {
	std::cout << "Dog default constructor called" << std::endl;
	setType();
	this->brain = new Brain();
	brain->setIdeas("Let's go for a walk");
}

Dog::Dog(Dog const &src) : AAnimal(src), brain(new Brain(*src.brain)) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &src) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &src) {
		AAnimal::operator=(src);
		delete this->brain;
		this->brain = new Brain(*src.brain);
	}
	return (*this);
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "barks" << std::endl;
}

void Dog::setType() {
	this->type = "Dog";
}

Brain *Dog::getBrain() const {
	return (brain);
}