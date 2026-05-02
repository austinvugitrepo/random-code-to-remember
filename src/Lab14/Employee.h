#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
	private:
		std::string employeeName; 
		int employeeNumber;
		std::string hireDate;
	public:
		Employee() {}

		Employee(std::string name, int num, std::string date) {
			employeeName = name;
			employeeNumber = num;
			hireDate = date;				
		}

		std::string getName() {
			return employeeName;
		}

		int getNumber() {
			return employeeNumber;
		}

		std::string getHireDate() {
			return hireDate;
		}

};
#endif
