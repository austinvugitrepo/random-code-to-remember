#ifndef LAB2PARTA_H
#define LAB2PARTB_H
#include <string>
#include <iostream>

class Animal {

	private:
		std::string name;
		int numLegs;
	public:
		void
		setName(std::string);
		void
		setNumLegs(int);
		std::string
		getName();
		int
		getNumLegs();
		virtual void
		print();
		Animal();
		Animal(int, std::string);
};

class Cat : public Animal {

	public:
		void
		print();
		Cat(int, std::string);

};
class Dog : public Animal {

	public:
		void
		print();
		Dog(int, std::string);

};

#endif
