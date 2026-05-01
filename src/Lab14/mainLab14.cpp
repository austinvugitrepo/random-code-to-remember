#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

// Function prototype
void displayInfo(ProductionWorker);

int main()
{
	//Fill in the missing code
	return 0;
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << e.getName() << endl;
	cout << "Employee number: " 
		 << e.getNumber() << endl;
	cout << "Hire date: " 
		 << e.getHireDate() << endl;
	cout << "Shift: " 
		 << e.getShiftName() << endl;
	cout << "Shift number: " 
		 << e.getShiftNumber() << endl;
	cout << "Pay rate: " 
		 << e.getPayRate() << endl;
}