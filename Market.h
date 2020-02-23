#pragma once
#include"Order.h"
#include<string>
#include<iostream>
#include<fstream>
#include<vector>
class Market
{
public:
	
	vector<Person*> persons;
	vector<Product> products;
	vector<Order>orders;
	
	void addProduct(const Product& product);
	void addPerson(Person *person);
	void addOrder(const Order& order);
	void removeProudct(int id);
	void removePerson(int id);
	void removeOrder(int id);
	void printPersonInfo(int id);
	void printProductDetails(int id);
	void printOrderDetails(int id);
	void printPersonOrders(int id);
};

