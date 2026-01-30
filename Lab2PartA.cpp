//austin vu
// first loop prints multiples of 3 from user input array;
// second loop does same thing but on different lines and uses ranged based for loop

#include <iostream>

int main(){

const int SIZE  = 10;  
int radii [SIZE];

std::cout << "Enter numbers for array:" << std::endl;
for (int i = 0; i <= SIZE -1; i++){
  
  std::cout << i + 1 << ":";
  std::cin >> radii[i];

}

std::cout << "Multiples of 3 on different lines:" << std::endl;
for (int i = 0; i <= SIZE -1; i++){
  
  std::cout << 3 * radii[i] << ", ";

}

std::cout << std::endl;

// ranged based for loop
std::cout << "Multiples of 3 on same line:" << std::endl;

for ( int i : radii){

 std::cout << 3 * i << ",\n";

}


return 0;

}
