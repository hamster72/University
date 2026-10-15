#include<iostream>
using namespace std;

int main()
{
	const int numPower=50;
	long long base,power,mod,ans=1,doublingPowr[numPower];
	cin >> base >> power >> mod;
	
	doublingPowr[0] = base % mod;
	for(int i=1 ; i<numPower ; ++i)
		doublingPowr[i] = doublingPowr[i-1] * doublingPowr[i-1] % mod;
		
	for(int j=0 ; (j<numPower) && (power>0) ; ++j)
	{
		if(power%2==1)
		{
		ans *= doublingPowr[j];
		ans %= mod;
		}
		power /= 2;
	}
	
	cout << ans << endl;
}
