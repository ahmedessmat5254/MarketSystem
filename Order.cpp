#include "Order.h"
int Order::idIncerment = 0;
void Order::setId(int id)
{
	this->id = id;
}

void Order::setDate(string date)
{
	this->date = date;
}

void Order::setIsPaid(bool isPaid)
{
	this->isPaid = isPaid;
}

int Order::getId()
{
	return id;
}

string Order::getDate()
{
	return date;
}

bool Order::getIsPaid()
{
	return isPaid;
}

Order::Order(string date, bool isPaid,Person *person,vector<Product>products)
{
	idIncerment++;
	this->date = date;
	this->isPaid = isPaid;
	this->person = person;
	this->products = products;

}
