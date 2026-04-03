#include <iostream>
#include <string>

class Person {
private:
	std::string name;
	char gender;
	int age;        
public:
	void setName(std::string);
	void setGender(char);
	void setAge(int);
	std::string getName();
	char getGender();
	int getAge();	
};

int main(){

Person myself; // object of Person class
std::string fullname;
char sex;
int old;
std::cout << "Enter your full name: ";
std::getline(std::cin, fullname);
std::cout << "Enter your gender (M or F): ";
std::cin >> sex;
std::cout << "Enter your age: ";
std::cin >> old;
myself.setName(fullname); // passing fullname to public member function, like how u can use members of structs u can use member functions in classes 
myself.setGender(sex);
myself.setAge(old); 

std::cout << "Find your information below:\n";

// displaying info of myself
std::cout << "Name: " << myself.getName() << std::endl;
std::cout << "Gender: " << myself.getGender() << std::endl;
std::cout << "Age: " << myself.getAge() << std::endl;

return 0;
}


void Person::setName(std::string n){
name = n;
}

void Person::setGender(char g){
gender = g;
}

void Person::setAge(int a){
age = a;
}

std::string Person::getName(){
return name;
}

char Person::getGender(){
return gender;
}

int Person::getAge(){
return age;
}


