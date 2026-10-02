#include<iostream>
using namespace std;

int main()
{
	const int numPower=50;
	long long base,power,mod,ans=1,doublingPower[numPower];
	cin >> base >> power >> mod;
	
	doublingPower[0] = base%mod;
	for(int i=1 ; i<numPower ; ++i)
		doublingPower[i] = doublingPower[i-1] * doublingPower[i-1] % mod;
	
	for(int j=0 ; (power>0)&&(j<numPower) ; ++j)
	{
		if(power%2 == 1)
		{
			ans *= doublingPower[j];
			ans %= mod;
		}
		power /= 2;
	}
	
	cout << endl << ans << endl;
	
}
