#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	const int MAX = 20000000;
	vector<bool> isPrime( MAX+1,true );
	vector<int> isTwinPrime;
	
	isPrime[0] = false;
	isPrime[1] = false;
	
	// find primes
	for( int i=2 ; (i*i)<=MAX ; ++i ) 
	{
		if( isPrime[i] )
		{
			for( int j=i*i ; j<=MAX ; j+=i ) isPrime[j] = false;
		}
	}
	
	// find twin primes	
	for( int i=2 ; i<=(MAX-2) ; ++i )
	{
		if( isPrime[i] && isPrime[i+2] )  isTwinPrime.push_back(i);
	}
	
	while( cin >> n ) cout << "(" << isTwinPrime[n-1] << ", " << isTwinPrime[n-1]+2 << ")\n";

	return 0;
 } 

