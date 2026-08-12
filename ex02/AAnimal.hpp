#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include "Brain.hpp"

class AAnimal {
	public:
		AAnimal();
		AAnimal(AAnimal const &);
		AAnimal & operator=(AAnimal const &);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;

		virtual Brain *getBrain() const = 0;

	protected:
		std::string type;
		virtual void setType() = 0;
};

#endif