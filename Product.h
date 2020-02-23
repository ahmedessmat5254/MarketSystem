#pragma once
#include<string>
#include<iostream>
using namespace std;
class Product
{
private:
	int id;
	string name;
	float price;
	static int idIncerment;
public:
	void setId(int id);
	void setName(string name);
	void setPrice(float price);
	int getId();
	string getName();
	float getPrice();
	Product();
	Product(int id, string name, float price);
	
};

