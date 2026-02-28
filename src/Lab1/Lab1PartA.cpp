//austin vu
// variable collecter
#include <iostream>
#include <string> // for string 
int main() {
  std::string fname;
  std::string lname;   // variables
  char gender;
  int age;
  float weight; // in lbs
  
  //getline cuz of white space cin for singular stream of input 
  std::cout << "Enter your First Name:" << std::endl;
  std::getline(std::cin, fname);
  std::cout << "Enter your Last Name:"<< std::endl;
  std::getline(std::cin, lname);
  std::cout << "Enter your Gender :" << std::endl;  // did not add error checking for now
  std::cin >> gender;
  std::cout << "Enter your Age:" << std::endl;
  std::cin >> age;
  std::cout << "Enter your Weight:" << std::endl;
  std::cin >> weight;
  //output
  std::cout << "Find your information below:" << std::endl;
  std::cout << "First Name:";
  std::cout << fname << std::endl;
  std::cout << "Last Name:";
  std::cout << lname << std::endl;
  std::cout << "Gender:";
  std::cout << gender << std::endl;
  std::cout << "Age:";
  std::cout << age << std::endl;
  std::cout << "Weight:";
  std::cout << weight << std::endl;






}
