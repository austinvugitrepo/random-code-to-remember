//array of structures
#include <iostream>
#include <string>

int main(){

struct TaxPayer { //tax payer struct
std::string lastName;
float taxRate;
float income;
float taxes;
};

int size = 5;
TaxPayer citizen[size]; //array consisting of TaxPayer structs;

std::cout << "Please enter the annual income and tax rate for 5 tax payers:\n";
for(int i = 0; i < size; i++){
std::cout << "Enter the last name of tax payer " << i + 1 << ": ";
std::cin >> citizen[i].lastName;
std::cout << "Enter this year's income for tax payer " << i + 1 << ": ";
std::cin >> citizen[i].income;
std::cout << "Enter the tax rate for tax payer " << i + 1 << ": ";
std::cin >> citizen[i].taxRate;
citizen[i].taxes = citizen[i].income * citizen[i].taxRate;
std::cout << std::endl;
}

std::cout << "Taxes due for this year:\n";
for(int i = 0; i < size; i++){
std::cout << i + 1 << ". " << citizen[i].lastName << ": $" << citizen[i].taxes << ".00" << std::endl;
}


return 0;
}
