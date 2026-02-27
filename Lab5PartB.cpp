//austin vu
//pointers + arrays

#include <iostream>

void displayValues(int a[], int s){

  std::cout << "Array using pointer notation:\n";
  for(int i = 0; i < s; i++){
    std::cout << *(a + i) << " ";  //prints out in pointer notation
  }
  std::cout << std::endl;
}
void squareValues(int a[], int s){
 std::cout << "Squared value in array using pointer notation:\n";
 for(int i = 0; i < s; i++){
   std::cout << *(a + i) * *(a + i) << " "; //prints out squared elements (in pointer notation)
 }
 std::cout << std::endl;
}

int main(){

int size = 5;
int arr[size];
std::cout << "Please input 5 integers: ";
for(int i = 0; i < size; i++){
  std::cin >> arr[i];
}
displayValues(arr, size);
squareValues(arr, size);
  return 0;
}
