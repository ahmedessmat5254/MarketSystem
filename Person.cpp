#include "Person.h"
int Person::idIncerment = 0;
void Person::setId(int id)
{
	this->id = id;
}
void Person::setName(string name)
{
	this->name = name;
}
void Person::setPhone(string phone)
{
	this->phone = phone;
}
void Person::setGender(string gender)
{
	this->gender = gender;
}
int Person::getId()
{
	return id;
}
string Person::getName()
{
	return name;
}
string Person::getPhone()
{
	return phone;
}
string Person::getGender()
{
	return gender;
}
Person::Person( int id,string name, string phone, string gender)
{
	idIncerment++;
	this->id = id;
	this->name = name;
	this->phone = phone;
	this->gender = gender;
}
void Person::printExtraInfo() { }