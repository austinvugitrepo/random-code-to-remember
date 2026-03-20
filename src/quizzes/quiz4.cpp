#include <iostream>


int main(){

const int SIZE = 10;
int values[SIZE];

std::cout << "Enter 10 integer values: ";
for(int i = 0; i < SIZE; i++){
std::cin >> *(values + i);
}
std::cout << "Your array doubled: ";
for(int i = 0; i < SIZE; i++){
std::cout << *(values + i) * 2 << " ";
}

std::cout << "\n";



return 0;
}
