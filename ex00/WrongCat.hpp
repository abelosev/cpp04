#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(WrongCat const &);
		WrongCat & operator=(WrongCat const &);
		~WrongCat();

		virtual void makeSound() const;
		virtual void setType();
};

#endif