#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public :
		Cat();
		Cat(Cat const &);
		Cat & operator=(Cat const &);
		virtual ~Cat();

		virtual void makeSound() const;
		virtual void setType();

		virtual Brain *getBrain() const;
	
	private :
		Brain *brain;
};

#endif