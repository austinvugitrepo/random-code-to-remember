//austin vu
// array switch (mem alloc)
#include <iostream>

int getAverage(int* arr, int size);
int getLargest(int* arr, int size);

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
 int choice = 0;
 int avg = 0;
 int large = 0;
  while(choice != 3){
  std::cout <<"\n\n\n\n\n";
  std::cout << "Enter choice:\n";
  std::cout << "1. Average.\n";
  std::cout << "2. Largest.\n";
  std::cout << "3. Quit.\n";
  std::cin >> choice;
  switch(choice){
    case 1:
      avg = getAverage(array, size);
      std::cout << "The average is: " << avg << std::endl; 
      break;
    case 2:
      large = getLargest(array, size);
      std::cout << "The largest number is: " << large << std::endl;
      break;
    case 3:
      std::cout << "Bye!" << std::endl;
      break;
    default:
      std::cout << "Invalid Choice!" << std::endl;
      break;
  }
  }
  delete[] array;
  return 0;
}

int getAverage(int* arr, int size){
  int total = 0;
  for(int i = 0; i < size; i++){
     total += arr[i];
  }
  return total / size;
}

int getLargest(int* arr, int size){
  int largest = arr[0];
  for(int i = 0 + 1; i < size; i++){
   if(arr[i] > largest){
     largest = arr[i];
   }
  }
  return largest;
}
