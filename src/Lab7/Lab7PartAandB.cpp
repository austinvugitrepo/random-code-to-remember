#include <iostream>

int calcArea(int, int); // area of rectangle
int calcArea(int); // area of square 
bool isLargeArea(int); // bool function that returns true if area > 20, which can be renamed to calcArea also because of function overloading
void isLargeArea(int, int); // compares area of square vs rectangle
int main(){

int l = 0;
int w = 0;
int s = 0;
std::cout << "Part A:\n\n";
std::cout << "Enter length for rectangle:\n";
std::cin >> l; 
std::cout << "Enter width for rectangle:\n";
std::cin >> w;
std::cout << "Enter side for square:\n";
std::cin >> s;
std::cout << "The area of rectangle is " << calcArea(l, w) << std::endl;
int rectA = calcArea(l, w);
if(isLargeArea(s)){ // this can be done because a bool IS THE CONDTION, no need for  == true or whatever if the function below returns true for u
std::cout << "The area of the square is larger than 20.\n";
} else {
std::cout << "The area of the square is less than or equal to 20.\n";
}
std::cout << "Part B:\n\n";
int squareA = calcArea(s);
std::cout << "The area of square is " << squareA << std::endl;
isLargeArea(rectA, squareA);
return 0;
}

int calcArea(int len, int wid){

 return len * wid;
}

int calcArea(int s){

 return s * s;
}

bool isLargeArea(int side){
 int area = 0;
 area = side * side;
 if (area > 20){
 return true;
} 

return false;

}

void isLargeArea(int r, int s){

if( r > s){
std::cout << "The area of the square is less than area of rectangle.\n";
}
else if( r < s) {
std::cout << "The area of the square is larger than area of rectangle.\n";
}
else {
std::cout << "The area of the square is equal to area of rectangle.\n";
}

}

