#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	public:
		Animal();
		Animal(Animal const &);
		Animal & operator=(Animal const &);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
		virtual void setType();
};

#endif