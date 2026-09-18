#include <iostream>
#include <cmath>
#include "Mass.h"

void
Mass::normalize()
{
	if (gram >= 1000) {
        	kilogram += gram / 1000;
        	gram = fmod(gram, 1000);

    	}

	if (kilogram >= 1000) {
        	tonne += kilogram / 1000;
        	kilogram = fmod(kilogram, 1000);

    	}
}

Mass::Mass()
{
	kilogram = 0;
	tonne = 0;
	gram = 0;

}

Mass::Mass(double t, double kg, double g) : tonne(t), kilogram(kg), gram(g)
{
	normalize();

}

Mass::Mass(const Mass& other)
{
	tonne = other.tonne;
	kilogram = other.kilogram;
	gram = other.gram;
}

Mass
Mass::operator+(const Mass& other) const 
{
	return Mass(tonne + other.tonne, kilogram + other.kilogram, gram + other.gram);

}

Mass
Mass::operator+(double g) const
{
	return Mass(tonne, kilogram, gram + g);
}

Mass
Mass::operator-(const Mass& other) const
{
	return Mass(tonne - other.tonne, kilogram - other.kilogram, gram - other.gram);
}

Mass&
Mass::operator=(const Mass& other)
{
    
	if (this != &other) {
       		tonne = other.tonne;
        	kilogram = other.kilogram;
        	gram = other.gram;

    	}

    	return *this;
}

bool
Mass::operator==(const Mass& other) const
{
	return tonne == other.tonne && kilogram == other.kilogram && gram == other.gram;

}


bool
Mass::operator!=(const Mass& other) const
{
	return !(*this == other);

}


bool
Mass::operator<(const Mass& other) const
{
    	if (tonne != other.tonne) {
        	return tonne < other.tonne;

    	}

    	if (kilogram != other.kilogram) {
        return kilogram < other.kilogram;

    	}   

    	return gram < other.gram;
}


bool
Mass::operator>(const Mass& other) const
{
	return other < *this;

}


Mass&
Mass::operator+=(const Mass& other)
{
	tonne += other.tonne;
	kilogram += other.kilogram;
	gram += other.gram;
	normalize();
	return *this;
}

// Mass + grams
Mass&
Mass::operator+=(double g) 
{
	gram += g;
    	normalize();
    	return *this;
}


void
Mass::display() const {
    std::cout << "\n" << tonne << " tonnes, \n "
    	<< kilogram << " kilograms, \n " <<
		gram << " grams\n";
}
