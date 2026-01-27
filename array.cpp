#include <iostream>
// program to calculate total of array
// final edit of this program
int array(int array[], int size) {
  int arrayreturn = 0;

  for(int i = 0; i < size; i++){
    std::cout << "Enter number:\n";
    std::cin >> array[i];
    arrayreturn += array[i];   
  }
  return arrayreturn;
}

int main(){
  int SIZE = 5;
  int arr[SIZE];
  std::cout << array(arr, SIZE) << std::endl;
  return 0;
}
