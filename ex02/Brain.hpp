#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
	public:
		Brain();
		Brain(Brain const &);
		Brain & operator=(Brain const &);
		~Brain();
		
		void printIdeas(int const nb) const;
		void setIdeas(std::string const &);

	private:
		std::string _ideas[100];
};

#endif