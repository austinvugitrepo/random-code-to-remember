#include <iostream>

int
main()
{
	int A, B;
	int* ptrA = &A;
	int* ptrB = &B;

	std::cout << "Enter Value of A: "; 
	std::cin >> A;
	std::cout << "\nEnter Value of B: "; 
	std::cin >> B;


	std::cout << "\nValue of ptrA is " << *ptrA
		<< " stored in address " << ptrA;
	std::cout << "\nValue of ptrB is " << *ptrB
		<< " stored in address " << ptrB;
	std::cout << "\n";

	return 0;


}
