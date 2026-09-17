#ifndef MASS_H
#define MASS_H

class Mass {

private:

    double tonne;
    double kilogram;
    double gram;

    // Helper function to normalize the mass values
    void normalize();

public:

    Mass();  
    Mass(double , double , double ); 
    Mass(const Mass& other);  

    Mass operator+(const Mass& other) const;
    Mass operator+(double g) const;

    Mass operator-(const Mass& other) const;

    Mass& operator=(const Mass& other);

    bool operator==(const Mass& other) const;
    bool operator!=(const Mass& other) const;

    bool operator<(const Mass& other) const;
    bool operator>(const Mass& other) const;

    Mass& operator+=(const Mass& other);
    Mass& operator+=(double g);

    void display() const;
};

#endif
