#pragma once
#include<string>
#include<iostream>
using namespace std;
class Person
{
private:
	int id;
	string name;
	string phone;
	string gender;
	static int idIncerment; //static variable to incerment id 
public:
	void setId(int id); //Function set id
	void setName(string name); //Function set name
	void setPhone(string phone); //Function set phone
	void setGender(string gender); //Function set gender
	int getId(); //Function get id
	string getName(); //Function get name
	string getPhone(); //Function get phone
	string getGender(); //Function get gender
	Person( int id, string name, string phone, string gender); //Paramterize constractor
	virtual void printExtraInfo(); //virtual Fnction to implement polyproshim concept 



	
};

