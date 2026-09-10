class Polygon {

	private:
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
