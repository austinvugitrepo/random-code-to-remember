#include <iostream>
using namespace std;
#include "converter.h"
int main() {

int wholenumber;

cout << "Please enter a number in the range 0 through 9999 :\n";
cin >> wholenumber;

while (wholenumber < 0 || wholenumber > 9999) {

cout << "You entered an invalid input!!!" << endl;
cout<< endl;
cout << "Please enter a number in the range 0 through 9999 :\n";
cin >> wholenumber;

}
converter numtoword(wholenumber);
numtoword.display();
  
}
