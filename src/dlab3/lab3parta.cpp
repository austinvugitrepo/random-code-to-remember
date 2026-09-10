#include "lab3parta.h"

int display(Polygon* );

int
main()
{
	Polygon p;
	Triangle t;
	Rectangle r;

	p.set_values(4, 5);
	t.set_values(4, 5);
	r.set_values(4, 5);

	std::cout << "Area as a Polygon object: " << display(&p);
	std::cout << "\nArea as a Triangle object: " << display(&t);
	std::cout << "\nArea as a Rectangle object: " << display(&r);

	return 0;

}

int
display(Polygon* shape)
{
	shape->area();

}
