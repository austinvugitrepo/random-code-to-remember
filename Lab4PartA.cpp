//austin vu
// displaying vector in reverse with 0 as last element
// also finding largest & smallest number
#include <iostream>
#include <vector>



int main(){

std::vector<int> number;

std::cout << "Input the numbers for the vector, with 0 as the last element: ";

int input = 0;

do{
 
 std::cin >> input;
 number.push_back(input);
 std::cout << "Input the numbers for the vector, with 0 as the last element: ";

}while(input != 0);
// removing last element 0 
number.pop_back();

std::cout << "There are " << number.size() << " elements stored in the vector" << std::endl;
//displaying vector in reverse order
std::cout << "Reverse order of numbers in vector:\n";
for (int i = number.size() - 1; i >= 0; i--){
  std::cout << number[i] << " "; 
}

std::cout << std::endl;

int largest = number[0]; //initialize to first element rather then 0 to not get bug
int smallest = number[0];
// finding largest and smallest number
for(int i = 1; i < number.size(); i++){  // i initalizes to 1 because we already used up element 0

if(number[i] > largest){
  largest = number[i + 1];
}

}
for(int i = 1; i < number.size(); i++){

if(number[i] < smallest){
  smallest = number[i + 1];
}

}

std::cout << "The largest number in the vector is: " << largest << std::endl;
std::cout << "The smallest number in the vector is: " << smallest << std::endl;

return 0;
}


