#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b;
	
	while( cin >> a >> b ) cout << fixed << setprecision(3) << b/a << "\n";
	
	return 0;
}

