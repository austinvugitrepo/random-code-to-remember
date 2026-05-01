#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

// Function prototype
void displayInfo(ProductionWorker);

int main()
{
	//Fill in the missing code
	std::string name = "John Jones";
	int num = 123;
	std::string date = "10/12/2016";
	int shift = 2;
	double hrrate = 20.00;
  
	ProductionWorker emp(name, num, date, shift, hrrate);

	displayInfo(emp);

	return 0;

}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
	std::cout << std::setprecision(2)
		 << std::fixed << std::showpoint;

	std::cout << "Name: " 
		 << e.getName() << std::endl;

	std::cout << "Employee number: " 
		 << e.getNumber() << std::endl;

	std::cout << "Hire date: " 
		 << e.getHireDate() << std::endl;

	std::cout << "Shift: " 
		 << e.getShiftName() << std::endl;

	std::cout << "Shift number: " 
		 << e.getShiftNumber() << std::endl;

	std::cout << "Pay rate: " 
		 << e.getPayRate() << std::endl;
}
