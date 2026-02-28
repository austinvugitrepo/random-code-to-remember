//austin vu
//bubble sort and selection sort
#include <iostream>

int bubble(int array[], int size);
int selection(int array[], int size);
int main(){

int array1[] = {931, 297, 624, 267, 777, 794, 555, 856, 335, 430};
// the size capacity is the size of the array itself divided by size of one element itself
int size1 = sizeof(array1) / sizeof(array1[0]);
int array2[] = {931, 297, 624, 267, 777, 794, 555, 856, 335, 430};
int size2 = sizeof(array2) / sizeof(array2[0]);
std::cout << "current array is:\n";
for(int i = 0; i < size1; i++){
  std::cout << array1[i] << " ";
}
std::cout << std::endl;
std::cout << std::endl;
int bexchange = bubble(array1, size1);
std::cout << "Sorted array after bubble sort is:\n";
for(int i = 0; i < size1; i++){
  std::cout << array1[i] << " ";
}
std::cout << std::endl;
std::cout << bexchange << " exchanges were made by Bubble Sort.\n";
std::cout << std::endl;
int sexchange = selection(array2, size2);
std::cout << "Sorted array after selection sort is:\n";
for(int i = 0; i < size2; i++){
  std::cout << array2[i] << " ";
}
std::cout << std::endl;
std::cout << sexchange << " exchanges were made by Selection Sort.\n";



return 0;

}

int bubble(int array[], int size){
  int tmp = 0;
  int counter = 0;
  for(int i = 0; i < size; i++){
   for(int j = 0; j < size - 1; j++){
        if(array[j] > array[j + 1]){
          tmp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = tmp;
          counter++;
        }
   }
  }
  return counter;
}

int selection(int array[], int size){
    int tmp = 0;
    int counter = 0;
    for(int i = 0; i < size - 1; i++){
    //set smallest to first element then incrementally
    int smallest = array[i];
    int sortidx = i;
    for(int j = i + 1; j < size; j++){
    if(smallest > array[j]){
      smallest = array[j];
      sortidx = j;
    }
  }
    tmp = array[i];
    array[i] = array[sortidx];
    array[sortidx] = tmp;
    counter++;
}
  return counter; 
}
