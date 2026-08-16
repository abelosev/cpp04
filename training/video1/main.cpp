#include <string>
#include <iostream>

class Character {
	public:
		void sayHello(std::string const &str);
};

class Warrior : public Character {
	public:
		void sayHello(std::string const &str);
};

void Character::sayHello(std::string const &str) {
	std::cout << "Hello, " << str << std::endl;
}

void Warrior::sayHello(std::string const &str) {
	std::cout << "Don't talk to me, " << str << std::endl;
}

int main() {
	Warrior* a = new Warrior();
	Character *b = new Warrior();

	a->sayHello("Bob");
	b->sayHello("Lysa"); // la fonction est choisie à l'étape de compilation
	return (0);
}