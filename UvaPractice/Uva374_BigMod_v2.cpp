#include<iostream>
using namespace std;

int main()
{
	long long base,power,mod;
	while(cin >> base >> power >> mod)
	{
		long long ans=1;
		
		while(power>0)
		{
		if(power%2 == 1)
			ans = ans * base % mod;
			
		base = base * base % mod;
		power /= 2;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}
