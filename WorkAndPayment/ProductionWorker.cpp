#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() : Worker()
{
	workingDays = 0;
	paymentPerDay = 0;
	position = PRODUCTION_WOKRER;
}

ProductionWorker::ProductionWorker(char* _name, char* _familyName, char* _personID, double _workingYears, int _workingDays, double _paymentPerDay) :
	Worker(_name, _familyName, _personID, _workingYears)
{
	workingDays = _workingDays;
	paymentPerDay = _paymentPerDay;
	payment = PaymentCalc();
	position = PRODUCTION_WOKRER;
	
}

double ProductionWorker::PaymentCalc()
{
	return workingDays * paymentPerDay;
}

void ProductionWorker::Print()
{
	Worker::Print();
	printf("Position: Production worker\n");
}


