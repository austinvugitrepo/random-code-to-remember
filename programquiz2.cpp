//austin vu
//returns largest number based on user input

#include <iostream>

int largestNumber(int num1, int num2, int num3);
int displayLargest(int largenum);

int main (){

int num1 = 0;
int num2 = 0;
int num3 = 0;
int largenum = 0; 

std::cout << "Enter number 1: ";
std::cin >> num1;
std::cout << std::endl;
std::cout << "Enter number 2: ";
std::cin >> num2;
std::cout << std::endl;
std::cout << "Enter number 3: ";
std::cin >> num3;
std::cout << std::endl;

largenum = largestNumber(num1, num2, num3);

displayLargest(largenum);

return 0;
}



int largestNumber(int num1, int num2, int num3){

 int largest = num1;

 for(int i = 0; i < 3; i++){
 if(largest < num2){
   largest = num2;
 }
 if(largest < num3){
  largest = num3;
 }
 }

 return largest;
}

int displayLargest(int largenum){
  std::cout << "Largest number is: " << largenum << std::endl;
  return 0;
}
