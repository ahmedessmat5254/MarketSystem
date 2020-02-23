#pragma once
#include "Person.h"
#include<iostream>
#include<string>
using namespace std;
class Client :public Person
{
private:
	string email;
public:
	void setEmail(string email);
	string getEmail();
	Client();
	Client(int id,string name, string phone, string gender, string email);

	void printExtraInfo();
};

