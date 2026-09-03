#include "lab2parta.h"

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

std::string
Animal :: speak()
{
	std::string s = "\n";
	return s;

} 

std::string
Animal :: move()
{
	std::string m = "\n";
	return m;

} 

void
Animal :: print()
{
	std::cout << "My name is " << getName() << std::endl;
	std::cout << "I have " << getNumLegs() << " legs.\n"; 
	std::cout << speak();
	std::cout << move();
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

std::string
Cat :: speak()
{
	std::string s = "I say Meow!\n";
	return s;

} 

std::string
Cat :: move()
{
	std::string m = "I slink around stealthily!\n";
	return m;

} 

std::string
Dog :: speak()
{
	std::string s = "I say Woof!\n";
	return s;

} 

std::string
Dog :: move()
{
	std::string m = "I run with my tongue hanging out!\n";
	return m;

} 

Cat :: Cat(int l, std::string n) : Animal(l, n)
{
}

Dog :: Dog(int l, std::string n) : Animal(l, n)
{
}
