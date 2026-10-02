#include<iostream> 
using namespace std;

float celsius,fahrenheit;
 
main()
{
	cout << "Enter the temperature in Celsius:";
	cin >> celsius;
	fahrenheit = celsius*9/5+32;
	cout << celsius << " Celsius\n" << fahrenheit << " Fahrenheit";
	return 0;
}

