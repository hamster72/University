#include<iostream>
using namespace std;

int main()
{
	int num,ans[100];
	
	while( cin >> num )
	{
		for ( int i=0 ; i<num ; ++i )
		{
			cin >> ans[i];
			ans[i] = ( ans[i] * 567 / 9 + 7492 ) * 235 / 47 - 498;
		}
		
		for ( int i=0 ; i<num ; ++i )
			if( ans[i] < 0 )
				cout << ans[i] * -1 / 10 % 10 << endl;
			else
				cout << ans[i] / 10 % 10 << endl;
	}
} 
