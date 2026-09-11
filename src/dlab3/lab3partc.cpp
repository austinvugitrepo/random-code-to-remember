#include "lab3partc.h"

int
main()
{
	int s, val1, val2, val3;

	std::cout << "Enter the size of the array: ";
	std::cin >> s;

	myArray obj(s);

	std::cout << "\nEnter 3 integers: ";
	std::cin >> val1;
	std::cin >> val2;
	std::cin >> val3;

	obj.add(val1);
	obj.add(val2);
	obj.add(val3);
	obj.display();

	return 0;

}
