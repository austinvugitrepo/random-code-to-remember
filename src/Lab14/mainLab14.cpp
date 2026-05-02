#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

// Function prototype
void displayInfo(ProductionWorker, ShiftSupervisor);

int main()
{
	//Fill in the missing code
	std::string name = "John Jones";
	int num = 123;
	std::string date = "10/12/2016";
	int shift = 2;
	double hrrate = 20.00;
  
	std::string sname = "Anna Queen";
	int snum = 001;
	std::string sdate = "1/1/2000";
	double sal = 50000.00;
	double bon = 2500.00;

	ProductionWorker emp(name, num, date, shift, hrrate);
	ShiftSupervisor sup(sname, snum, sdate, sal, bon);
	displayInfo(emp, sup);

	return 0;

}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e, ShiftSupervisor s)
{
	std::cout << std::setprecision(2)
		 << std::fixed << std::showpoint;

	std::cout << "Name: " 
		 << s.getName() << std::endl;

	std::cout << "Employee number: " 
		 << s.getNumber() << std::endl;

	std::cout << "Hire date: " 
		 << s.getHireDate() << std::endl;

	std::cout << "Annual Salary: " 
		 << s.getYearlySalary() << std::endl;

	std::cout << "Annual Bonus: " 
		 << s.getYearlyBonus() << std::endl;

	std::cout << std::endl;
	
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
