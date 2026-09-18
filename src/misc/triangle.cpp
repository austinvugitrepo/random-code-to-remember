#include <iostream>

class triangle {

	private:
		double base, height;

	public:
		triangle();
		triangle(double, double);

		void
		setbase(double);
		void
		setheight(double);

		double
		getbase();
		double
		getheight();
		double
		getarea();
};

triangle :: triangle()
{
	base = 0;
  	height = 0;
}

triangle :: triangle(double b, double h)
{
	base = b;
	height = h;
}

void
triangle::setbase(double b)
{
	base = b;
}

void
triangle::setheight(double h)
{
	height = h;
}

double
triangle::getbase()
{
	return base;
}

double
triangle::getheight()
{
	return height;
}

double
triangle::getarea()
{
	return base * height * 0.5;
}

int main()
{ 
	int amount = 0;
  
	std::cout << "How many triangles do you want to make?" << std::endl;
	std::cin >> amount;
	
	if (amount <= 0) { 

		std::cout << "Can't make that amount of triangles!" << std::endl;
		return 1;
	}

	triangle *array = new triangle[amount];

	for (int i = 0; i < amount; i++) {
    
		int base = 0;
		int height = 0;
    
		std::cout << "what is the base of triangle " << i + 1 << ": " << std::endl;
		std::cin >> base;
    
		std::cout << "what is the height of triangle " << i + 1 << ": " << std::endl;
		std::cin >> height;
    
    		array[i].setbase(base);
    		array[i].setheight(height);
    
  	}

	if (amount == 1) {
    
		std::cout << "The triangle with the highest area is triangle 1" << std::endl;
		std::cout << "The height is " << array[0].getheight() << std::endl;
		std::cout << "The base is " << array[0].getbase() << std::endl;
		std::cout << "The area of triangle 1 is " << array[0].getarea() << std::endl;

		return 0;
	}

	int highest = 0;

	for (int i = 1; i < amount; i++) {
    
		if (array[i].getarea() > array[highest].getarea()) {

			highest = i;
		}

  	}
    
	std::cout << "The triangle with the highest area is triangle " << highest + 1 << std::endl;
	std::cout << "The height is " << array[highest].getheight() << std::endl;
	std::cout << "The base is " << array[highest].getbase() << std::endl;
	std::cout << "The area of the largest triangle is " << array[highest].getarea() << std::endl;

	delete [] array;

	return 0;

}
