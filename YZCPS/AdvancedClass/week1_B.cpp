#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long n,k;
vector<long long> sum;

bool check( long long mid )
{
	int groups = 1;
	long long total = 0;
			
	for( int i=1 ; i<n+1 ; ++i )
	{
		if( total+sum[i] > mid )
		{
			++groups;
			total = sum[i];
		}
		else
		{
			total += sum[i];
		}
	}
			
	return groups <= k;
}


int main()
{
	while( cin >> n >> k )
	{
		long long high=0,low=0,mid=0;
		sum.resize(n + 1);
				
		for( int i=1 ; i<n+1 ; ++i ) 
		{
			cin >> sum[i];
			
			low = max(low,sum[i]);
			high += sum[i];
		}
		
		while( low<high )
		{
			mid = low + (high-low)/2;
			
			if( check(mid) ) high = mid;
			else low = mid+1;
		}
		
		cout << low << "\n";
	}
	
	return 0;
}
