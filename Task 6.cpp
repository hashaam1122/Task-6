#include<iostream>
using namespace std;
int main()
{
	int price, quantity;
	int total, tax, grandtotal;
	cout << "Enter price and quantity:";
	cin >> price >> quantity;
	total = price * quantity;
	tax = total * 5 / 100;
	grandtotal = total + tax;
	cout << "total:" << total << endl;
	cout << "tax:" << tax << endl;
	cout << "grandtotal:" << grandtotal << endl;

	return 0;
}