#include "Market.h"
vector<Person*> persons;
vector<Product> products;
vector<Order>orders;

void Market::addProduct(const Product &product)
{
	products.push_back(product);

}

void Market::addPerson(Person * person)
{
	persons.push_back(person);
}

void Market::addOrder(const Order& order)
{
	orders.push_back(order);
}

void Market::removeProudct(int id)
{
	for (int i = 0; i < products.size(); i++)
	{
		if (products[i].getId() == id)
		{
			products.erase(products.begin() + i);
			return;
		}
		cout << "Product With id " << id << " is not found !" << endl;
		cout << "-------------------------" << endl;
	}
}

void Market::removePerson(int id)
{
	for (int i = 0; i < persons.size(); i++)
	{
		if (persons[i]->getId() == id)
			persons.erase(persons.begin() + i);
		return;
	}
	cout << "Person With id " << id << " is not found !" << endl;
	cout << "---------------------------" << endl;
}

void Market::removeOrder(int id)
{
	for (int i = 0; i < orders.size(); i++)
	{
		if (orders[i].getId() == id)
		{
			orders.erase(orders.begin() + i);
			return;
		}
		cout << "Order with id " << id << " is not found!" << endl;
		cout << "------------------------" << endl;
	}
}

void Market::printPersonInfo(int id)
{
	for (int i = 0; i < persons.size(); i++)
	{
		if (persons[i]->getId() == id) {
			cout << "Person With id :" << persons[i]->getId() << endl;
			cout << " Name : " << persons[i]->getName() << endl;
			cout << " Phone " << persons[i]->getPhone() << endl;
			cout << " Gender " << persons[i]->getGender() << endl;
			persons[i]->printExtraInfo();
			cout << "------------------------" << endl;
			
		}
	}
	cout << "Person With id " << id << " is not found !" << endl;
	cout << "------------------------" << endl;
}

void Market::printProductDetails(int id)
{
	for (int i = 0; i < products.size(); i++)
	{
		if (products[i].getId() == id) {
			cout << "Product With Id :" << products[i].getId() << endl;
			cout << "Name : " << products[i].getName() << endl;
			cout << "Price : " << products[i].getPrice() << endl;
			cout << "-----------------------" << endl;
			return;
		}
	}
	cout << "Proudct with Id " << id << " is not found ! " << endl;
	cout << "---------------------" << endl;
}

void Market::printOrderDetails(int id)
{
	float totalSum = 0;
	for (int i = 0; i < orders.size(); i++)
	{
		if (orders[i].getId() == id)
		{
			cout << "Product With Id : " << orders[i].getId() << endl;
			cout << "Date :" << orders[i].getDate() << endl;
			cout << " Is Paid " << (orders[i].getIsPaid() ? "Yes" : "No") << endl;
			cout << "Ordered by : " << orders[i].person->getName() << endl;
			cout << "Products : " << endl;
			for (int j = 0; j < orders[i].products.size(); j++)
			{
				totalSum += orders[j].products[j].getPrice();
				cout << "- " << orders[i].products[j].getName() << ": " << orders[i].products[j].getPrice() << "$ " << endl;
				cout << "Total: " << totalSum << endl;
			}
			cout << "Order With Id " << id << " is not found ! " << endl;
			cout << "-----------------------" << endl;
			return; 
		}
	}
}

void Market::printPersonOrders(int id)
{
	for (int i = 0; i < persons.size(); i++)
	{
		if (persons[i]->getId() == id)
		{
			cout << "All Orders made by person with id " << id << endl;
			for (int j = 0; j < orders.size(); j++)
			{
				if (orders[j].person->getId() == id)
				{
					cout << "> Order with id  " << id << " Details" << endl;
					cout << "Date : " << orders[j].getDate() << endl;
					cout << "Is Paid : " << (orders[j].getIsPaid() ? "Yes" : "No") << endl;
					cout << "Ordered by : " << orders[j].person->getName() << endl;
					cout << "Products :" << endl;
					float totalSum = 0;
					for (int k = 0; k < orders[j].products.size(); k++)
					{
						totalSum += orders[j].products[k].getPrice();
						cout << "- " << orders[j].products[k].getName() << ": " << orders[j].products[k].getPrice() << " $ " << endl;
						
					}
					cout << "Total: " << totalSum << endl;
				}
			}
		}
		cout << "---------------------------" << endl;
		return;
	}
	cout << "Person With id  : " << id << " is not found ! " << endl;
	cout << "-------------------------" << endl;
}

