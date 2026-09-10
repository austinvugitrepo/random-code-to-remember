#include <iostream>

int
main()
{
	int A, B;
	int* ptrA, ptrB;

	std::cout << "Enter Value of A: "; 
	std::cin >> A;
	std::cout << "Enter Value of B: "; 
	std::cin >> B;

	ptrA = A;
	ptrB = B;

	std::cout << "Value of ptrA is " << *ptrA
		<< " stored in address " << ptrA;
	std::cout << "Value of ptrB is " << *ptrB
		<< " stored in address " << ptrB;

	return 0;


}
