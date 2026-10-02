
#include <iostream>
#include <iomanip>
using namespace std;

float table[1][99],celsius,fahrenheit;

int main()
{
	for( int i=0 ; i<100 ; ++i )
	{
		table[0][i] = i;
		table[1][i] = i * 180.0 / 100.0 + 32;
	}

	cout << "Celsius";
	for( int i=0 ; i<100 ; ++i )
		cout << setw(10) << table[0][i];
	
	cout << endl << "Fahrenheit";
	for( int i=0 ; i<100 ; ++i )
		cout << setw(10) << fixed << setprecision(1) << table[1][i];
	
	return 0;
}
