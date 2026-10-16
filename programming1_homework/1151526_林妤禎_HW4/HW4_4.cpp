#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float table[2][100];
	int p=0;


	for( int i=0 ; i<100 ; ++i )
	{
		table[0][i] = i;
		table[1][i] = i * 180.0 / 100.0 + 32;
	}
	
	
	for( int i=0 ; i<5 ; ++i )
		cout << setw(4) << "Ce" << setw(8) << "Fahr";
	cout << endl;
	
	for( int i=0; i<5 ; ++i )
		cout << setw(4) << "--" << setw(8) << "-----";
	cout << endl;
	
	
	for( int j=0 ; j<20 ; ++j )
	{
		p=j;
		for( int i=0 ; i<5 ; ++i )
		{
			cout << fixed << setprecision(0) << setw(4) << table[0][p];
			cout << fixed << setprecision(2) << setw(8) << table[1][p];
			p += 20;
		}
		cout << endl;
	}
	
	return 0;
}
