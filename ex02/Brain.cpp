#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
	setIdeas("Default");
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain & Brain::operator=(Brain const &src) {
	if (this != &src) {
		for (int i = 0; i < 100; ++i) {
			_ideas[i] = src._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::printIdeas(int const nb) const {
	if (nb > 100) {
		std::cout << "Max 100 ideas" << std::endl;
		return ;
	}
	for (int i = 0; i < nb; ++i) {
		std::cout << this->_ideas[i] << std::endl;
	}
}

void Brain::setIdeas(std::string const &str) {
	for (int i = 0; i < 100; ++i) {
		this->_ideas[i] = str;
	}
}