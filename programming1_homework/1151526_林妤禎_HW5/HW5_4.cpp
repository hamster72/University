#include <iostream>
using namespace std;

bool isDivisible( int a,int b )
{
	if ( a % b == 0 ) return true;
	else return false;
}


int main()
{
	int n;
	cout << "Enter a number between 1 and 100:";
	cin >> n;
	
	cout << "The number:" << n << endl;
	cout << "The factors:";
	
	for( int i=1 ; i<n+1 ;++i ) 
	{
		if( isDivisible(n, i) )
			cout << i << " ";
	}
	
    return 0;
}
