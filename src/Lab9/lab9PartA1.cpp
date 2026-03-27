// c string name arranger
#include <cstdio> // C libraries for C stuff
#include <cstring>

int main(){

char firstName[50];
char middleName[50]; //char arrays are strings
char lastName[50];

printf("What is your first name?: "); //ask for names
fgets(firstName, sizeof(firstName), stdin); // syntax is fgets(arr, size of array, and input aka std input from keyboard)

printf("What is your middle name?: ");
fgets(middleName, sizeof(middleName), stdin);

printf("What is your last name?: ");
fgets(lastName, sizeof(lastName), stdin);

//debug print 

printf("Your first name is: %s", firstName); // %s stands for string 


return 0;
}
