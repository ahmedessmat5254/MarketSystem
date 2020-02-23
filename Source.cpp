/*
	Devlop By Ahmed Mohamed Essmat 
	
	Thank You Route

*/
#include<iostream>
#include<string>
#include"Client.h"
#include"Employee.h"
#include"Market.h"
#include"Order.h"
#include"Person.h"
#include"Product.h"
#include<vector>
#include<string>
#include<Windows.h>

//Welcome animatoin 
void loading() {


	for (int i = 0; i <= 35; i++) {
		system("Cls");
		cout << "\n\n\n\t\t\t\t   __      __   ___  | |   ___    ___    _ __ ___     ___  " << endl;
		cout << "\t\t\t\t   \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\ " << endl;
		cout << "\t\t\t\t    \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/ " << endl;
		cout << "\t\t\t\t     \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___| " << endl;
		cout << "\n\n \t\t\t\t \t \t  "  " Please Wait..... " << endl;;
		cout << "\n\\t\t\t\t\t\t\t The System is Loading " << endl;
		cout << "\n\t\t\t\t\tLoading[";
		for (int j = 0; j <= i; j++) {
			cout << "=";
		}cout << ">";
		for (int l = i; l < 35; l++) {
			cout << " ";
		}
		cout << "]";
		Sleep(100);

	}
	system("Cls");


}
//Exit animation 
void exitanim()
{
	system("cls");

	for (int i = 0; i < 5; i++)
	{
		cout << "\n\n\n";
		cout << "                      =====" << endl;
		cout << "                    ==      ==" << endl;
		cout << "                   ==  O   O == " << endl;
		cout << "                   ==    u   ==    " << endl;
		cout << "                    ==      ==               " << endl;
		cout << "                       ====                       " << endl;
		cout << "                        ==    " << endl;
		cout << "                        ==    " << endl;
		cout << "                    =============      \\|/      " << endl;
		cout << "                   ==            ==     ==     " << endl;
		cout << "                   ==            ==    ==      " << endl;
		cout << "                   ==            ==   ==        " << endl;
		cout << "                   ==            ==  ==         " << endl;
		cout << "                   ==            == ==          " << endl;
		cout << "                   ==             === ";
		cout << "\n\n\t\t\t\t\t Good Bye ";
		Sleep(220);

		system("cls");
		cout << "\n\n\n";
		cout << "                      =====" << endl;
		cout << "                    ==      ==" << endl;
		cout << "                   ==  O   O == " << endl;
		cout << "                   ==    u   ==    " << endl;
		cout << "                    ==      ==               " << endl;
		cout << "                       ====                       " << endl;
		cout << "                        ==    " << endl;
		cout << "                        ==    " << endl;
		cout << "                    =============   \\|/      " << endl;
		cout << "                   ==            ==  ==     " << endl;
		cout << "                   ==            ==  ==      " << endl;
		cout << "                   ==            ==  ==        " << endl;
		cout << "                   ==            ==  ==         " << endl;
		cout << "                   ==            ==  ==          " << endl;
		cout << "                   ==             === ";
		cout << "\n\n\t\t\t\t\t Good Bye ";
		Sleep(220);

		system("cls");
		cout << "\n\n\n";

		cout << "                      =====" << endl;
		cout << "                    ==      ==" << endl;
		cout << "                   ==  O   O == " << endl;
		cout << "                   ==    u   ==    " << endl;
		cout << "                    ==      ==               " << endl;
		cout << "                       ====                       " << endl;
		cout << "                        ==    " << endl;
		cout << "                        ==    " << endl;
		cout << "                    =============         \\|/      " << endl;
		cout << "                   ==            ==        ==     " << endl;
		cout << "                   ==            ==       ==      " << endl;
		cout << "                   ==            ==      ==        " << endl;
		cout << "                   ==            ==     ==         " << endl;
		cout << "                   ==            ==   ==          " << endl;
		cout << "                   ==             === ";
		cout << "\n\n\t\t\t\t\t Good Bye ";
		cout << "\n\n\t\t\t\t\t Develop By Ahme Mohamed Essmat " << endl;
		Sleep(220);

		system("cls");

	}
}
using namespace std;
int main()
{
	//Welcome Function 
	loading();
	//Client
	Client person1(1, "Ahmed", "01111724001", "Male", "ahmedesssmat5254@gmail.com");
	//Employee
	Employee person2(2, "Mohamed", "01000071081", "Male", 5000, "8Am to 9Pm");
	Client *person1Pointer = &person1;
	Employee *person2Pointer = &person2;

	//Product 
	Product product1 = Product(1, "Milk", 30);
	Product product2 = Product(2, "Keyboard", 29);
	Product product3 = Product(3, "hard HDD 1TD", 234);
	Product product4 = Product(4, "Hard SDD 1TD", 800);
	Product product5 = Product(5, "Table", 801);
	Product product6 = Product(6, "Mouse", 2);
	Product product7 = Product(7, "Cheesse", 23);
	// Order 1 
	vector<Product> order1Product;
	order1Product.push_back(product1);
	order1Product.push_back(product2);
	order1Product.push_back(product3);
	//Order 2
	vector<Product> order2Product;
	order2Product.push_back(product4);
	order2Product.push_back(product5);
	order2Product.push_back(product6);
	//Order 3
	vector<Product>order3Product;
	order3Product.push_back(product7);
	//The order is paid Ture or false
	Order order1 = Order("2020-1-1", true, person1Pointer, order1Product);
	Order order2 = Order("2020-3-1", true, person1Pointer, order2Product);
	Order order3 = Order("2020-4-1", false, person1Pointer, order3Product);

	Market market = Market();
	//add Person 
	market.addPerson(person1Pointer);
	market.addPerson(person2Pointer);

	//add Product
	market.addProduct(product1);
	market.addProduct(product2);
	market.addProduct(product3);
	market.addProduct(product4);
	market.addProduct(product5);
	market.addProduct(product6);
	market.addProduct(product7);
	//add Order 
	market.addOrder(order1);
	market.addOrder(order2);
	market.addOrder(order3);
	//Print Product Details
	market.printProductDetails(1);
	market.printProductDetails(2);
	//Print person Info 
	market.printPersonInfo(1);
	market.printPersonInfo(2);
	//Print person Orders 
	market.printPersonOrders(1);
	market.printOrderDetails(2);
	market.printPersonOrders(1);
	//Exit Function 
	int x;
	cout << "Exit System Choice num 1" << endl;
	cin >> x;

	switch (x)
	{
	case 1:
		exitanim();
	}

}