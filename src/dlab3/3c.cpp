#include "lab3partc.h"

myArray :: myArray(int size)
{
	maxSize = size;
	arr = new int[maxSize];
	nextIndex = 0;

}

myArray :: myArray(const myArray& other)
{
	maxSize = other.maxSize;
	arr = new int[maxSize]; 
	nextIndex = other.nextIndex;

	for (int i = 0; i < nextIndex; i++)
		arr[i] = other.arr[i];
}

myArray :: ~myArray()
{
	delete [] arr;
}

void
myArray :: display()
{
	std::cout << "The list you entered is: ";
	for (int i = 0; i < nextIndex; i++)
		std::cout << arr[i] << " ";

	std::cout << "\n";
}

void
myArray :: add(int val)
{
	if (nextIndex >= maxSize)
		std::cout << "The array is too full.\n"; 
	else {
		arr[nextIndex] = val;
		nextIndex++;
	}
}

void
myArray :: remove()
{
	nextIndex--;

	if (nextIndex == 0) {
 
	std::cout << "After removing, the list is: ";
	std::cout << "Empty List!\n";
	std::cout << "Cannot remove from an empty array.\n";

	} else {
	std::cout << "After removing, the list is: ";
	for (int i = 0; i < nextIndex; i++)
		std::cout << arr[i] << " ";

	std::cout << "\n";

	}
}
