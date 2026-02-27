//austin vu
//pointers + arrays
// part b number 2
#include <iostream>

int main(){

int size = 5;
int arr[size];
std::cout << "Please input 5 integers: ";

for(int i = 0; i < size; i++){
  std::cin >> arr[i];
}
int* arrptr = arr;
std::cout << "Array using pointer notation:\n";                   
for(int i = 0; i < size; i++){                                         
  std::cout << arrptr[i] << " "; 
}                                                                 
std::cout << std::endl;
std::cout << "Squared value in array using pointer notation:\n";
 for(int i = 0; i < size; i++){
   std::cout << arrptr[i] * arrptr[i ]<< " ";
 }
 std::cout << std::endl;

return 0;
}
