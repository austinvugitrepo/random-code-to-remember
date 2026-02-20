#include <iostream>

int main(){

int intVal = 0;
double doubleVal = 0;

int* intPtr = &intVal;
double* doublePtr = &doubleVal;

std::cout << "Enter an integer number: ";
std::cin >> intVal;
std::cout << std::endl;
std::cout << "Enter a double value: ";
std::cin >> doubleVal;

std::cout << "Direct Approach\n";
std::cout << "  You entered the following values:\n ";
std::cout << intVal << " and " << doubleVal << std::endl;

std::cout << "Indirect Operation or Dereferencing\n";
std::cout << "  You entered the following values:\n ";
std::cout << *intPtr << " and " << *doublePtr << std::endl;
std::cout << "--------------------------------------------------------------------------\n";

std::cout << "Direct Approach\n";
std::cout << "  Your entered values are now doubled. The new values are :\n ";
std::cout << 2 * intVal << " and " << 2 * doubleVal << std::endl;

std::cout << "Indirect Operation or Dereferencing\n";
std::cout << "  Your entered values are now doubled. The new values are :\n ";
std::cout << "  You entered the following values:\n ";
std::cout << 2 * *intPtr << " and " << 2 * *doublePtr << std::endl;





  return 0;
}
