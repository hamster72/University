#include<iostream>
using namespace std;

int main ()
{
	const int numPower=50;
	long long base,power,mod,doublingPowers[numPower];
	
	cin >> base >> power >> mod;
	
	doublingPowers[0] = base % mod;
	for(int i=1 ; i<numPower ; ++i)
	{
		doublingPowers[i] = doublingPowers[i-1] * doublingPowers[i-1];
		doublingPowers[i] %= mod;
	}
	
	long long answer=1;
	for(int j=0 ; (j<numPower)&&(power>0) ; ++j)
	{
		if(power%2 == 1)
		{
			answer *= doublingPowers[j];
			answer %= mod;
		}
		power /= 2;
	}
	
	cout << endl << answer << endl;
 } 
