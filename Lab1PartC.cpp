//austin vu
//swap
#include <iostream>

int swap (int n1, int n2){
  int tmp;
  tmp = n1;
  n1 = n2;
  n2 = tmp;
  std::cout <<"after swapping the values of the two numbers are " << n1 << " and " << n2 << std::endl;
  return 0;
}
int main(){
  
int num1; //numbers to be swapped
int num2;

// collection of input 
std::cout << "Enter the first number and then hit enter:";
std::cin >> num1;
std::cout << std::endl;
std::cout << "Enter the second number and then hit enter:";
std::cin >> num2;
std::cout << std::endl;
std::cout << "You inputted the numbers as " << num1 << " and " << num2 << std::endl;
swap(num1, num2);

return 0;


} 
