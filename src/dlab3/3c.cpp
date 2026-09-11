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

}

void
myArray :: display()
{


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
