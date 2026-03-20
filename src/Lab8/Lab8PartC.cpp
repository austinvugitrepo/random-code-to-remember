#include <iostream>
#include <cctype> // for error checking

void menu(){
std::cout << "\nList of the available pets and their price:\n";
std::cout << "Enter 0 to buy Dogs.\n";
std::cout << "Enter 1 to buy Cats.\n";
std::cout << "Enter 2 to buy Birds.\n";
std::cout << "Enter 3 to buy Hamsters.\n";
std::cout << "Enter 4 to quit\n";
std::cout << "Which pet do you want to buy?: ";
}
int main(){
enum Pets {Dogs = 1500, Cats = 1200, Birds = 1050, Hamsters = 1400}; // manually assignment of values otherwise they start from 0 and go up 1

Pets pet;
char choice = 'A';
menu();
std::cin >> choice;
if(choice == '4'){             // for quiting early 
return 0;
}
//error check if not digit
while(!(isdigit(choice))){
std::cout << "You entered an invalid input. Try again.\n\n";
menu();
std::cin >> choice;

}

while(choice != '4'){ // loop to keep going into user quits
switch(choice){

case '0':
	pet = Dogs;
        std::cout << "Dogs price is $" << pet << ".00";
        menu();
        std::cin >> choice;
        std::cout << std::endl;
        break;
case '1':
        pet = Cats;
        std::cout << "Cats price is $" << pet << ".00";
        menu();
        std::cin >> choice;
        std::cout << std::endl;
        break;
case '2':
        pet = Birds;
        std::cout << "Birds price is $" << pet << ".00";
        menu();
        std::cin >> choice;
        std::cout << std::endl;
        break;
case '3':
        pet = Hamsters;
        std::cout << "Dogs price is $" << pet << ".00";
        menu();
        std::cin >> choice;
        std::cout << std::endl;
        break;
case '4':
	break;
default:
	std::cout << "You entered an invalid input. Try again.\n\n";
        menu();
        std::cin >> choice;
        std::cout << std::endl;
	break;



}
}
return 0;
}
