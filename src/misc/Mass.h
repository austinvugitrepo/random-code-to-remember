#ifndef MASS_H
#define MASS_H

class Mass {

	private:
		double tonne, kilogram, gram;

		void
		normalize();

	public:
    		Mass();  
    		Mass(double , double , double ); 
    		Mass(const Mass&);  
    		Mass
		operator+(const Mass&) const;
    		Mass
		operator+(double) const;
    		Mass
		operator-(const Mass&) const;
    		Mass&
		operator=(const Mass&);

    		bool
		operator==(const Mass&) const;
    		bool
		operator!=(const Mass&) const;
    		bool
		operator<(const Mass&) const;
    		bool
		operator>(const Mass&) const;

    		Mass&
		operator+=(const Mass&);
    		Mass&
		operator+=(double);

    		void
		display() const;
};

#endif
