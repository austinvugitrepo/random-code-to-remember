#include <iostream>

int mystery(int);

int
main()
{
	int n;
	int val;

	std::cout << "Enter number:\n";
	std::cin >> n;
	val = mystery(n);
	std::cout << "The mystery number is: " << val << std::endl; 
}

int
mystery(int number)
{
	int total = 1;
 
	while (number > 1) {
		total = number * total;
		number--;
	}

	return total;

}
