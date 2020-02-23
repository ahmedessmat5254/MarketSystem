#include "Client.h"

void Client::setEmail(string email)
{
	this->email = email;
}

string Client::getEmail()
{
	return email;
}

Client::Client():Person(0,"","","")
{
	email = " ";
}

Client::Client(int id,string name, string phone, string gender, string email)
	:Person (id,name,phone,gender)
{
	this->email = email;

}

void Client::printExtraInfo()
{
	cout << "Email : " << getEmail() << endl;
}
