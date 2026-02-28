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
int capitalize(char cstr[], int size){

int strlength = strlen(cstr);
if(strlength < 4){
  return 1;
} 
else{
cstr[2] = toupper(cstr[2]);
cstr[3] = toupper(cstr[3]);
return 0;
}

}


int main(){
// for C style strings 
char string[100];
int cap = 100;
char string2[cap];
// can hold 99 characters plus null
int position = 0;
std::cout << "Please enter a string:\n";
// C string version of getline(cin, C++ string)
std::cin.getline(string, 100);
std::cout << "Please enter a position to toggle:\n";
std::cin >> position;
std::cin.ignore(); // gets rid of \n in buffer 
toggle(string, position);
std::cout << "Toggled string...\n";
std::cout << string << "\n";
std::cout << "----------------------------------------\n";
std::cout << "Please enter a string to capitalize 3rd and 4th letter:\n";
std::cin.getline(string2, cap);
capitalize(string2, cap);
std::cout << "Capitalized string...\n";
std::cout << string2 << "\n";

return 0;
}
