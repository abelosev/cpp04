#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

#include "Brain.hpp"

class Animal {
	public:
		Animal();
		Animal(Animal const &);
		Animal & operator=(Animal const &);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
		virtual Brain *getBrain() const;

		//virtual Brain *getBrain() const = 0; will make Animal abstract

	protected:
		std::string type;
		virtual void setType();
};

#endif