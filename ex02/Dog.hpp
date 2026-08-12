#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public :
		Dog();
		Dog(Dog const &);
		Dog & operator=(Dog const &);
		virtual ~Dog();

		virtual void makeSound() const;
		virtual void setType();

		virtual Brain *getBrain() const;
	
	private :
		Brain *brain;
};

#endif