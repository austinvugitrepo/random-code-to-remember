#include "lab3parta.h"

void
Polygon :: set_values(int w, int h) 
{
	width = w; 
	height = h; 

}

int
Polygon :: area()
{
	int area = 0;
	return area;

}

int
Triangle :: area()
{
	int area = width * height * 0.5;
	return area;

}

int
Rectangle :: area()
{
	int area = width * height;
	return area;

}
