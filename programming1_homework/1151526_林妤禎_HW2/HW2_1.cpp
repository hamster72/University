#include<iostream> 
using namespace std;

float purchase,cash;
int change,dollar,quarter,dime,nickel,penny;

int main()
{
	cout << "Enter the purchase amount:";
	cin >> purchase;
	cout << "Enter the cash amount:";
	cin >> cash;
	change = (cash-purchase)*100;
	
	
	dollar = change/100;
	change = change%100;
	
	quarter = change/25;
	change = change%25;
	
	dime = change/10;
	change = change%10;
	
	nickel = change/5;
	change = change%5;
	
	penny = change/1;
	change = change%1;
	

	cout << "Change:" << endl;
	cout << dollar << " dollars\n" << quarter << " quarters\n" << dime << " dimes\n" << nickel << " nickels\n" << penny << " pennies";

	return 0;
}

