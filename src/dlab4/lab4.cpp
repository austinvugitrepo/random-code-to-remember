#include "lab4.h"

template <class elemType>
arrayList<elemType> :: arrayList(int size)
{
	length = 0;
	maxSize = size;
	list = new elemType[maxSize];

}

template <class elemType>
arrayList<elemType> :: arrayList(const arrayList& otherList)
{
	length = otherList.length;
	maxSize = otherList.size;
	list = new elemType[maxSize];

	for (int i = 0; i < length; i++)
		list[i] = otherList.list[i];

}

template <class elemType>
bool
arrayList<elemType> :: isEmpty() const
{
	return length == 0;

}

template <class elemType>
bool
arrayList<elemType> :: isFull() const
{
	return length == maxSize;

}

template <class elemType>
int
arrayList<elemType> :: listSize() const
{
	return length;

}

template <class elemType>
int
arrayList<elemType> :: maxListSize() const
{
	return maxSize;

}

template <class elemType>
void
arrayList<elemType> :: print() const
{
	for (int i = 0; i < length; i++)
		std::cout << list[i] << " ";

}
