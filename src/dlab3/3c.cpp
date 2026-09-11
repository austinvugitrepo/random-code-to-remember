#include "lab3partc.h"

myArray :: myArray(int size)
{
	maxSize = size;
	arr = new int[maxSize];
	nextIndex = 0;

}

myArray :: myArray(const myArray& other)
{




}

myArray :: ~myArray()
{
	delete [] arr;
}

void
myArray :: display()
{
	maxSize = nextIndex;

	std::cout << "The list you entered is: ";
	for (int i = 0; i < maxSize; i++)
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


}
