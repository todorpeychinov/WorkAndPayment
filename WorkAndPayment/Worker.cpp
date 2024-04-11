#include "Worker.h"
#include "ProductionWorker.h"

Worker::Worker()
{
	name[0] = '\0';
	familyName[0] = '\0';
	personID[0] = '\0';
	workingYears = 0;
	payment = 0;
	position = 0;
}

Worker::Worker(char* _name, char* _familyName, char* _personID, double _workingYears)
{
	strcpy_s(name, _name);
	strcpy_s(familyName, _familyName);
	strcpy_s(personID, _personID);
	workingYears = _workingYears;
	
}

void Worker::Print()
{
	printf("\nName: %s\n", name);
	printf("Family Name: %s\n", familyName);
	printf("personalID: %s\n", personID);
	printf("Working years: %.2f\n", workingYears);
	printf("Salary: %.2f\n", payment);
}

Worker& Worker::operator=(Worker& d){
	strcpy_s(name,d.name);
	strcpy_s(familyName, d.familyName);
	strcpy_s(personID, d.personID);
	workingYears=d.workingYears;
	payment=d.payment;
	return *this;

}

char* Worker::getName()
{
	return name;
}

char* Worker::getFamilyName()
{
	return familyName;
}


double Worker::getWorkingYears()
{
	return workingYears;
}

int Worker::GetPosition()
{
	return position;
}
