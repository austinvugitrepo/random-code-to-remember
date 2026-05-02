#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee {
	private:
		int shift;
		double hourlyPayRate;
	public:
		ProductionWorker() {}
		
		ProductionWorker(std::string name, int num,
			std::string date, int s, double r)
				: Employee(name, num, date) {
			shift = s;
			hourlyPayRate = r;
		}

		int
		getShiftNumber() {
			return shift;
		}

		double
		getPayRate() {
			return hourlyPayRate;
		}

		std::string
		getShiftName() {
			if (shift == 1)
				return "Day";
			else
				return "Night";
		}
};

#endif
