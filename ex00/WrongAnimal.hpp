#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &);
		WrongAnimal & operator=(WrongAnimal const &);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
		virtual void setType();
};

#endif