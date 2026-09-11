#ifndef LAB3PARTA_H
#define LAB3PARTA_H

class Polygon {

	protected:
		int width, height;
	public:
		void
		set_values(int, int);
		virtual int
		area();

};

class Triangle : public Polygon {

	public:
		int
		area();

};

class Rectangle : public Polygon { 

	public:
		int
		area();

};

#endif
