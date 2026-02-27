//austin vu
// string toggle 
#include <iostream>
#include <cstring>
#include <cctype> // for checking and messing with lower and upper characters 

int toggle(char cstr[], int charpos){

// if a letter continue if checks 
if(isalpha(cstr[charpos - 1])){
// if lower case char make upper 
if(islower(cstr[charpos - 1])){
cstr[charpos - 1] = toupper(cstr[charpos - 1]);  //assigning returned character from function to element allows for modification otherwise toupper will only return and not modify 
}
// if upper case char make lower 
else if(isupper(cstr[charpos - 1])){
cstr[charpos - 1] = tolower(cstr[charpos - 1]);
}

}


return 0;

}


int main(){
// for C style strings 
char string[100];
// can hold 99 characters plus null
int position = 0;
std::cout << "Please enter a string:\n";
// C string version of getline(cin, C++ string)
std::cin.getline(string, 100);
std::cout << "Please enter a position to toggle:\n";
std::cin >> position;
toggle(string, position);
std::cout << "Toggled string...\n";
std::cout << string << std::endl;









  return 0;
}
