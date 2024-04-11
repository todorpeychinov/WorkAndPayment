#include "Employee.h"

Employee::Employee() : Worker()
{
	fullTimeSalary = 0;
	workClass = 0;
	position = EMPLOYEE;
}

Employee::Employee(char* _name, char* _familyName, char* _personID, double _workingYears, double _fullTimeSalary) : Worker(_name, _familyName, _personID, _workingYears)
{
	fullTimeSalary = _fullTimeSalary;
	workClass = workingYears * (0.01 * fullTimeSalary);
	payment = PaymentCalc();
	position = EMPLOYEE;

}

double Employee::PaymentCalc()
{
	double currentPayment;
	currentPayment = fullTimeSalary + workClass;
	return currentPayment;
}

void Employee::Print()
{
	Worker::Print();
	printf("Position: Employee\n");

}

char* Employee::getName()
{
	return name;
}

char* Employee::getFamilyName()
{
	return familyName;
}

char* Employee::getPersonalID()
{
	return personID;
}

double Employee::getWorkingYears()
{
	return workingYears;
}


void Employee::operator=(Worker& p)
{
	strcpy_s(name, p.getName());
	strcpy_s(familyName, p.getFamilyName());
	strcpy_s(personID, p.getPersonalID());
	workingYears = p.getWorkingYears();
	position = EMPLOYEE;


}




void Employee::SetSalary(double _salary) {
	fullTimeSalary = _salary;
	workClass = workingYears * (0.01 * fullTimeSalary);
	payment = PaymentCalc();
}
