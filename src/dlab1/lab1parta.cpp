#include <iostream>
#include <string>

class secretType {
	private:
		std::string name;
		int age, weight;
		double height;
	public:
		void
		print();
		void
		setName(std::string);
		void
		setAge(int);
		void
		setWeight(int);
		void
		setHeight(double);
		std::string
		getName();
		int
		getAge();
		int
		getWeight();
		double
		getHeight();
		secretType();
		secretType(std::string, int, int, double,);

};


void
secretType :: print()
{
	std::cout << "Name: " << getName() << endl;
	std::cout << "Age: " << getAge() << " yrs\n";
	std::cout << "Weight: " << getWeight() << "lbs\n";
	std::cout << "Height" << getHeight() << "ft\n";

}

void
secretType :: setName(std::string n)
{
	name = n;

} 

void
secretType :: setAge(int a)
{
	age = a;

}

void
secretType :: setWeight(int w)
{
	weight = w;

}

void
secretType :: setHeight(double h)
{
	height = h;

}

std::string
secretType :: getName()
{
	return name;

}

int
secretType :: getAge()
{
	return age;

}

int
secretType :: getWeight()
{
	return weight;

}

double
secretType :: getHeight()
{
	return height;

} 

secretType :: secretType()
{
	name = "";
	age = 0;
	weight = 0;
	height = 0.0;

} 

secretType :: secretType(std::string n, int a, int w, double h) 
{
	name = n;
	age = a;
	weight = w;
	height = h;

}
