//austin vu


#include <iostream>

int arrayfunc(int arr[], int size, int num);

int main (){
  //assuming the array is 10 integers
  int SIZE = 10;
  int number;
  int array[SIZE];
  std::cout << "Type a number: ";
  std::cin >> number;
  std::cout << "Enter 10 elements for this array:" << std::endl;
  for(int i = 0; i <= SIZE - 1; i++){
     std::cout << "element "<< i + 1 << ": ";
     std::cin >> array[i];
  }
  arrayfunc(array, SIZE, number);

  return 0;
}

int arrayfunc(int arr[], int size, int num) {
   std::cout << "Numbers that are greater than " << num << ".\n";
   for( int i = 0; i <= size - 1; i++){
     if (arr[i] > num){
       std::cout << arr[i] << " at " << i << std::endl; 
     }

   }
   
   return 0;

}

