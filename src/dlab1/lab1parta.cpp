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
		secretType(std::string, int, int, double);

};

int 
main()
{
	secretType p;
	secretType p2("Miguel", 22, 160, 5.8);
	secretType p3;
	std::string n;
	int a, w;
	double h;

	std::cout << "Default:\n";
	p.print();
	std::cout << "\n\n";
	std::cout << "Set Parameters:\n";
	p2.print();

	std::cout << "\n\n";
	std::cout << "Enter name:\n";
	std::getline(std::cin, n);
	std::cout << "Enter age:\n";
	std::cin >> a;
	std::cout << "Enter weight:\n";
	std::cin >> w;
	std::cout << "Enter height:\n";
	std::cin >> h;

	std::cout << "User Parameters:\n";
	p3.setName(n);
	p3.setAge(a);
	p3.setWeight(w);
	p3.setHeight(h);
	p3.print();

	return 0;

}

void
secretType :: print()
{
	std::cout << "Name: " << getName() << std::endl;
	std::cout << "Age: " << getAge() << "yrs\n";
	std::cout << "Weight: " << getWeight() << "lbs\n";
	std::cout << "Height: " << getHeight() << "ft\n";

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
