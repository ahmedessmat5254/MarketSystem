#include "Product.h"
int Product::idIncerment = 0;
void Product::setId(int id)
{
	this->id = id;
}
void Product::setName(string name)
{
	this->name = name;
}
void Product::setPrice(float price)
{
	this->price = price;
}
int Product::getId()
{
	return id;
}
string Product::getName()
{
	return name;
}
float Product::getPrice()
{
	return price;
}
Product::Product()
{
}
Product::Product(int id, string name, float price)
{
	idIncerment++;
	this->id = id;
	this->name = name;
	this->price = price;

}
