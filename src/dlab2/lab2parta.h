#ifndef LAB2PARTA_H
#define LAB2PARTA_H
#include <string>

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
		void
		print();
		Animal();
		Animal(int, std::string);
};


#endif
