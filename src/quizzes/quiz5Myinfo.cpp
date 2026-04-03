#include <iostream>
#include <string>

int main(){

struct MyInfo {
std::string firstname;
std::string lastname;
std::string city;
std::string state;
};

MyInfo intro;

intro.firstname = "Austin";
intro.lastname = "Vu";
intro.city = "Corpus Christi";
intro.state = "TX";

std::cout << "*** My intro ***" << std::endl; 
std::cout << "My full name is " << intro.firstname << " " << intro.lastname << ".\n";
std::cout << "I live in " << intro.city << ", " << intro.state << ".\n";



return 0;
}
