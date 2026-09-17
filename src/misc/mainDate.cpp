#include <iostream>
using namespace std;
#include "Date.h"

int main() {
  
  bool bo = true;
  
  int m;
  int d;
  int y;
  
  cout << "Enter the month (number) : \n ";
  cin >> m;
  cout << "Enter the day (number) :  \n";
  cin >> d;
  cout << " Enter the year (number): \n";
  cin >> y;
  
  Date time(m, d, y);
  
  while(bo){

    cout << "The Date is: ";
    time.printDate();
    cout << "1. add days" << endl;
    cout << "2. subtract days" << endl;
    cout << "3. get day" << endl;
    cout << "4. get month" << endl;
    cout << "5. get year" << endl;
    cout << "6. quit" << endl;

    int choice;
    int choicew;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch(choice){
      
      case 1:
        cout << "\n\nHow many days do you want to add: ";
        cin >> choicew;
        time.addDays(choicew);
        break;
      
      case 2: 
        cout <<"\n\nHow many days do you want to subtract: ";
        cin >> choicew;
        time.subtractDays(choicew);
        break;
      
      case 3:
        cout << "\n\nThe day is: " << time.getDay() << endl;
        break;
      case 4:
        cout << "\n\nThe month is: " << time.getMonth() << endl;
        break;
      case 5:
        cout << "\n\nThe year is: " << time.getYear() << endl;
        break;
      case 6:
        bo = false;
        break;
    }

  }
}
