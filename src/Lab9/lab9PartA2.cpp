// c++ string name arranger
#include <iostream>
#include <string>

int main(){

std::string fName;
std::string mName;
std::string lName;
std::string fullName;

std::cout << "What is your first name?: ";
std:getline(std::cin, fName); 
std::cout << "What is your middle name?: ";
std::getline(std::cin, mName);
std::cout << "What is your last name?: ";
std::getline(std::cin, lName);

std::cout << "Your first name is " << fName << std::endl;

return 0;
}
