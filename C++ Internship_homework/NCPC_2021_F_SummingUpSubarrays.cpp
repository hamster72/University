#include<iostream>
#include<vector>
using namespace std;

int n;

// find a contiguous subarray whose sum is a multiple of n
int ans()
{
	vector<int> a(n,0);
	vector<int> ans(n,-1);
	
	int sum=0;
	
	for( int i=0 ; i<n ; ++i ) cin >> a[i];
	
	// calculate the prefix sum and its remainder	
	for( int i=0 ; i<n ; ++i )
	{
		sum = ( sum+a[i] ) %n;
		
		// case1: the current prefix sum is a multiple of n
		if( sum == 0)
		{
			cout << "0 " << i << endl; 
			break;
		}
		// case2: the same remainder has appeared before
		// the difference between the two prefix sums is a multiple of n
		else if( ans[sum] != -1 ) 
		{
			cout << ans[sum]+1 << " " << i << endl;
			break; 
		}
		else
			ans[sum]=i;
					
	}
			
	return 0;
}


int main()
{
	int t;
	cin >> t;
	
	while( t-- )
	{
		cin >> n;
		ans();
	}
	
	return 0;
 } 
