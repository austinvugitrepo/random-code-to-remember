#include <iostream>

class Square {

private:
	float side;  //private member variable
public:
	void setSide(float);
	float getSide();     //public member functions
 	float findArea();
	float findPerimeter();

};

int main(){

Square box; //Square object called box

float number = 0;
std::cout << "Please input the size of a side of a square: ";
std::cin >> number;
box.setSide(number); // give number to setSide func
std::cout << "The area of the square which size is "<< box.getSide() << " is " << box.findArea() << std::endl;
std::cout << "The perimeter of the square which size is "<< box.getSide() << " is " << box.findPerimeter() << std::endl;



return 0;
}

void Square::setSide(float s){
side = s;  //copy number now s to side member
}

float Square::getSide(){
return side;
}
                                           //implementations for member functions of class Square;
float Square::findArea(){
return side * side;
}

float Square::findPerimeter(){
return side * 4;
}

