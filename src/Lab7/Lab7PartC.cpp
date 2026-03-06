#include <iostream>

void calcAreaRef(int &s){

s = s * s;               // reference 

}

int calcRectArea(){

static int count = 1;
int length = 6;
int width = 4;
length = count * length; // without static every time count will update length and width but would not be able to increment when called multiple times
width = count * width;   // would always technically restart at 1 and grow to 2 but then go back to 1 again without static
int area = length * width;
count++;

return area;
}
int main(){

int side = 0;
std::cout << "Enter side of square: ";
std::cin >> side;
calcAreaRef(side);
std::cout << "The area of square using reference variable is: " << side << std::endl;
std::cout << "Rectangle:  Area:\n";
for(int i = 0; i < 5; i++){
std::cout << i + 1 << "  " << calcRectArea() << std::endl;

}

return 0;
}
