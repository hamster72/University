#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	
	cout << "PERFECTION OUTPUT" << endl;
	
	while(cin >> n)
	{
		if(n==0)	
			break;
		
		int ans=0;
		
		for( int i=1 ; i<n ; ++i )
		{
			if(n%i==0)
				ans += i;	
		}
		
		if(ans == n)
			cout << right << setw(5) << n << "  PERFECT" << endl;
		else if(ans <  n)
			cout << right << setw(5) << n << "  DEFICIENT" << endl;
		else
			cout << right << setw(5) << n << "  ABUNDANT" << endl;
				
	}
	cout << "END OF OUTPUT" << endl;
	
	return 0;
}
