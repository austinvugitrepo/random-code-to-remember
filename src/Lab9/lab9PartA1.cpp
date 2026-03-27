// c string name arranger
#include <cstdio> // C libraries for C stuff
#include <cstring>

int main(){

int csize = 50;
char firstName[csize];
char middleName[csize]; //char arrays are strings
char lastName[csize];
char nameArranger[csize * 3]; // 3 times the size of the char arrays above

printf("What is your first name?: "); //ask for names
fgets(firstName, sizeof(firstName), stdin); // syntax is fgets(arr, size of array, and input aka std input from keyboard)
//fgets includes the \n at the end so we need to get rid of it for cleaner output when appending string at the end
firstName[strcspn(firstName, "\n")] = '\0'; //strcspn (string complement span aka finds the thing not in my array via the second slot which can be a string or a different complementary array) , then make that position null to end the string 

printf("What is your middle name?: ");
fgets(middleName, sizeof(middleName), stdin);

printf("What is your last name?: ");
fgets(lastName, sizeof(lastName), stdin);
firstName[strcspn(lastName, "\n")] = '\0';

strcpy(nameArranger, lastName); //copy lastname into nameArranger 
strcat(nameArranger, ","); // append "," to the last name
printf("Your last name is: %s", nameArranger);
printf("\n");


return 0;
}
