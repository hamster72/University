#include <iostream>
#include <string>
using namespace std;

int main()
{
	string streetNumber,streetName,cityName,stateName,zipCode;
	cout << "Enter your street No:";
	cin >> streetNumber;
	cout << "Enter your street Name:";
	cin >> streetName;
	cout << "Enter your city:";
	cin >> cityName;
	cout << "Enter your state:";
	cin >> stateName;
	cout << "Enter your zip code:";
	cin >> zipCode;
	cout << endl << "Your address is:"<< streetNumber << " " << streetName << "," << cityName << "," << stateName << " " << zipCode;
	
}
