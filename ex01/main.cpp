#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

// не забыть проверить на leaks

int main() {

	int const nbAnimal = 3;
	int const nbLines = 2;

	const Animal *ptr[nbAnimal];

	for (int i = 0; i < nbAnimal; ++i) {
		if (i % 2 == 1)
			ptr[i] = new Cat ();
		else
			ptr[i] = new Dog();
	}

	std::cout << "\nArray check" << std::endl;
	for (int i = 0; i < nbAnimal; ++i) {
		std::cout << "idx : " << i;
		std::cout << ", type : " << ptr[i]->getType();
		std::cout << ", sound : ";
		ptr[i]->makeSound();
		std::cout << nbLines << " first ideas : " << std::endl;
		ptr[i]->getBrain()->printIdeas(nbLines);
		std::cout << std::endl;
	}

	for (int i = 0; i < nbAnimal; ++i)
		delete ptr[i];

	std::cout << "\nDeep copies check" << std::endl;

	const Dog *dog = new Dog();
	const Dog dogCopy(*dog);

	std::cout << "\ndog's address: " << dog;
	std::cout << ", dogCopy's address: " << &dogCopy << std::endl;

	std::cout << "\ndog's first idea" << std::endl;
	dog->getBrain()->printIdeas(1);
	
	std::cout << "\ndogCopy's first idea" << std::endl;
	dogCopy.getBrain()->printIdeas(1);

	std::cout << "\ndog's first idea modified" << std::endl;
	dog->getBrain()->setIdeas("You go, I'll stay");
	dog->getBrain()->printIdeas(1);

	std::cout << "\ndogCopy's first idea after dog's idea modification" << std::endl;
	dogCopy.getBrain()->printIdeas(1);

	std::cout << "\ndogCopy's first idea after deleting dog" << std::endl;
	delete dog;
	dogCopy.getBrain()->printIdeas(1);

	std::cout << "\nTo prove that Animal is not abstract here" << std::endl;
	Animal a;
	Brain *b = a.getBrain();
	std::cout << "Type : "<< a.getType() << std::endl;
	if (b)
		a.getBrain()->printIdeas(1);

	return (0);
}