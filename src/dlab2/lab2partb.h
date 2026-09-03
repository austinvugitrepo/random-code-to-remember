#ifndef LAB2PARTB_H
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
		std::string
		speak();
		std::string
		move();
		virtual void
		print();
		Animal();
		Animal(int, std::string);
};

class Cat : public Animal {

	public:
		void
		print();
		std::string
		speak();
		std::string
		move();
		Cat(int, std::string);

};
class Dog : public Animal {

	public:
		void
		print();
		std::string
		speak();
		std::string
		move();
		Dog(int, std::string);

};

#endif
