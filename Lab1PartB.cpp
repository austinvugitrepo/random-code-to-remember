//austin vu
// perimeter of square and rectangle (with function overloading)
// yes u can function overload in c++  
int perimeter(int);
int perimeter(int, int);
 
#include <iostream>

int main(){

  int square; 
  int rectangle1;
  int rectangle2;
  
  // quick collect of user input
  std::cout << " 1 side of a square:";
  std::cin >> square;
  std::cout << "rectangle dimensions (length and width):\n";
  std::cout << "length:";
  std::cin >> rectangle1;
  std::cout << "width:";
  std::cin >> rectangle2;
  // calling with overloading 
  perimeter(square);
  perimeter(rectangle1, rectangle2);
  
  return 0;
}

int perimeter(int newsquare){ // clone of square variable of main that will live only here `

    int perimeter = newsquare * 4;
    std::cout << "square perimeter: ";
    std::cout << perimeter <<std::endl; // lab says to use defined function to print out perimeter
    return 0;
} 
int perimeter(int newsrectl, int newsrectw){ // clones of rectangle variables of main that will live only here `

    int perimeter = 2 * (newsrectl + newsrectw);
    std::cout << "rectangle perimeter: ";
    std::cout << perimeter <<std::endl; // lab says to use defined function to print out perimeter
    return 0;
} 

