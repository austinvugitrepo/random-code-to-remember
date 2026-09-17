#include <iostream>
#include "Mass.h"
using namespace std;

int main() {
    Mass mass1(1, 250, 500);  // left to right : tonne , kilogram , gram
    Mass mass2(2, 300, 400);  

    Mass mass3 = mass1 + mass2;
    
    cout << "mass1 + mass2 = ";
    mass3.display();
    
    cout << endl;
    cout<< endl;
    
    mass3 = mass1 + 800;
    cout << "mass1 + 800g = ";
    mass3.display();
    
    cout << endl;
    cout<< endl;
    
    mass3 = mass1 - mass2;
    cout << "mass1 - mass2 = ";
    mass3.display();
    cout << endl;
    cout<< endl;
    if (mass1 == mass2) {
      cout << "mass1 is equal to mass2\n";
    } else {
      cout << "mass1 is not equal to mass2\n";
    }

    if (mass1 > mass2) {
        cout << "mass1 is greater than mass2\n";
    } else {
        cout << "mass1 is not greater than mass2\n";
    }

    cout << endl;
    cout<< endl;
    
    mass1 += mass2;
    cout << "mass1 += mass2 = ";
    mass1.display();

    cout << endl;
    cout<< endl;

    mass1 += 900;
    cout << "mass1 += 900g = ";
    mass1.display();

    return 0;
}
