#include <iostream>
using namespace std;

int main()
{
	const int taxRate=9;
	float sale,tax,total;
	cout << "Enter sale amount:";
	cin >> sale;
	tax = sale*taxRate/100;
	total = sale+tax;
	cout << "Sale amount:" << sale << "\nTax amount:" << tax <<  "\nTotal amount due:" << total;
	
}
