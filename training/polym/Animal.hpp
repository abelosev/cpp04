#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	public:
		Animal();
		Animal(std::string const & name);
		Animal(Animal const &);
		Animal & operator=(Animal const & src);
		virtual ~Animal();

		virtual void makeSound();

	protected:
		std::string _name;
};

void printSound(Animal &);

#endif