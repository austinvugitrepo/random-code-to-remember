#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

class ProductionWorker : public Employee {
	private:
		int shift;
		double hourlyPayRate;
	public:
		ProductionWorker() {}
		
		ProductionWorker(int shift, double rate) {

		}

		int getShift() {
			return shift;
		}

		double getHourlyPayRate() {
			return hourlyPayRate;
		}
}

#endif
