#include "lab2partb.h"

void displayanimal(Animal* b);

int
main()
{
	Animal a;
	Cat c(4, "Cat");
	Dog d(4, "Dog");

	displayanimal(&a);
	displayanimal(&c);
	displayanimal(&d);

	return 0;

}

void
displayanimal(Animal* b)
{
	b->print();

}
