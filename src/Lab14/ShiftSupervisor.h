#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"

class ShiftSupervisor : public Employee {
	private:
		double yrsal;
		double yrbonus;
	public:
		ShiftSupervisor() {}

		ShiftSupervisor(std::string name, int num, std::string date,
			double ys, double yb)
				: Employee(name, num, date) {
			yrsal = ys;
			yrbonus = yb;
		}

		double
		getYearlySalary() {
			return yrsal;
		}

		double
		getYearlyBonus() {
			return yrbonus;
		}

};

#endif
