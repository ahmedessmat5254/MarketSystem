#pragma once
#include "Person.h"
#include<iostream>
#include<string>
using namespace std; 
class Employee :public Person
{
private:
	float salary;
	string workingTime;
public:
	void setSalary(float salary);
	void setWorkingTime(string workingTime);
	float getSalary();
	string getWorkinTime();
	Employee(int id,string name, string phone, string gender, float salary, string workingTime);

	void printExtraInfo();
};

