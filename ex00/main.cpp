#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	meta->makeSound();
	cat->makeSound();
	dog->makeSound();

	std::cout << "\nWrongAnimal + WrongCat tester\n" << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	std::cout << wmeta->getType() << " ";
	wmeta->makeSound();
	std::cout << std::endl;

	std::cout << wcat->getType() << " ";
	wcat->makeSound();
	std::cout << std::endl;

	delete wcat;
	delete dog;
	delete cat;
	delete meta;

	return 0;
}