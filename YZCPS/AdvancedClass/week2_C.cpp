#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long long n,q,a,b;
	
	while( cin >> n >> q )
	{
		vector<long long> sum(n+1,0);
		for( int i=1 ; i<n+1 ; ++i ) cin >> sum[i];
		for( int i=2 ; i<n+1 ; ++i ) sum[i]=sum[i-1]+sum[i];
		
		for( int i=0 ; i<q ; ++i ) 
		{
			cin >> a >> b;
			cout << (sum[b]-sum[a-1]) << "\n";
		}
	}
	
	return 0;
 } 
