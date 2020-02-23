#include "Employee.h"

void Employee::setSalary(float salary)
{
	this->salary = salary;
}

void Employee::setWorkingTime(string workingTime)
{
	this->workingTime = workingTime;
}

float Employee::getSalary()
{
	return salary;
}

string Employee::getWorkinTime()
{
	return workingTime;
}

Employee::Employee(int id,string name, string phone, string gender, float salary, string workingTime)
	:Person(id,name,phone,gender)
{
	this->salary = salary;
	this->workingTime = workingTime;
}

void Employee::printExtraInfo()
{
	cout << "Salary : " << getSalary() << endl;
	cout << "Working Time : " << getWorkinTime() << endl;

}
