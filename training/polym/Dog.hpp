#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog(std::string const & str);
		Dog(Dog const &);
		Dog & operator=(Dog const &);
		~Dog();

		virtual void makeSound();
		std::string getName() const;
};

#endif