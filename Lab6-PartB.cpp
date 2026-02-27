#include <iostream>

int main(){

  int size = 0;
  std::cout << "Enter number of values processed: ";
  std::cin >> size;
  while(size <= 0){
    std::cout << "Invalid Input! Please enter a value greater than 0: ";
    std::cin >> size;
  }
  int* array = new int[size];
  std::cout << "Please enter the values: ";
  for(int i = 0; i < size; i++){
    std::cin >> array[i];
  }
  std::cout << "your array: ";
   for(int i = 0; i < size; i++){
    std::cout << array[i] << " ";
  }
  

  delete[] array;
  return 0;
}
