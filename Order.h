#pragma once
#include"Product.h"
#include"Person.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Order 
{
private:
	int id;
	string date;
	bool isPaid;
	static int idIncerment;
public:
	Person *person;
	vector<Product> products;
	void setId(int id);
	void setDate(string date);
	void setIsPaid(bool isPaid);
	int getId();
	string getDate();
	bool getIsPaid();
	Order( string date, bool isPaid,Person *person, vector<Product> products);
};

