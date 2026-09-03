#include "lab2parta.h"


int
main()
{
	Animal a;
	Cat c(4, "Cat");
	Dog d(4, "Dog");

	a.print();
	std::cout << a.speak();
	std::cout << a.move();
	c.print();
	std::cout <<  c.speak();
	std::cout << c.move();
	d.print();
	std::cout << d.speak();
	std::cout << d.move();

	return 0;

}
