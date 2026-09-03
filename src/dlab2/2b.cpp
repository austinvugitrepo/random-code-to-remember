#include "lab2partb.h"

void
Animal :: setName(std::string n)
{
	name = n;

}

void
Animal :: setNumLegs(int l)
{
	numLegs = l;

}

std::string
Animal :: getName()
{
	return name;

}

int
Animal :: getNumLegs()
{
	return numLegs;

}

void
Animal :: print()
{
	std::cout << "My name is " << getName() << std::endl;
	std::cout << "I have " << getNumLegs() << " legs.\n"; 
	std::cout << "\n";
	std::cout << "\n";
}

void
Cat :: print()
{
	std::cout << "My name is " << getName() << std::endl;
	std::cout << "I have " << getNumLegs() << " legs.\n"; 
	std::cout << "I say Meow!\n";
	std::cout << "I slink around stealthily!\n";
}

void
Dog :: print()
{
	std::cout << "My name is " << getName() << std::endl;
	std::cout << "I have " << getNumLegs() << " legs.\n"; 
	std::cout << "I say Woof!\n";
	std::cout << "I run with my tongue hanging out!\n";
}

Animal :: Animal()
{
	name = "";
	numLegs = 0;

}

Animal :: Animal(int l, std::string n)
{
	name = n;
	numLegs = l;

}

Cat :: Cat(int l, std::string n) : Animal(l, n)
{
}

Dog :: Dog(int l, std::string n) : Animal(l, n)
{
}
