#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for( int count=1 ; count<=t ; ++count )
	{
		int n,m;
		long long k;
		cin >> n >> m >> k;
		
		// cin single land's cost
		vector< vector<int> > land( n,vector<int>(m,0) );
		for( int i=0 ; i<n ; ++i )
		{
			for( int j=0 ; j<m ; ++j) cin >> land[i][j];
		}
		
		int bestArea=0;
		long long bestCost=0;
		
		// fix left boundary
		for( int l=0 ; l<m ; ++l)
		{
			vector<long long> rowSum(n,0);
			
			// fix right boundary
			for( int r=l ; r<m ; ++r )
			{
				// count rowSum
				for( int i=0 ; i<n ; ++i ) rowSum[i] += land[i][r];
				
				int top=0;
				long long sum=0;
				
				// sliding window
				for( int bottom=0 ; bottom<n ; ++bottom )
				{
					sum += rowSum[bottom];
					
					while( sum>k ) 
					{
						sum -= rowSum[top];
						++top;
					}
					
					int width = r-l+1;
					int height = bottom-top+1;
					int area = width*height;
					
					if( area>bestArea ) 
					{
						bestArea = area;
						bestCost = sum;
					}
					else if ( area==bestArea && sum<bestCost )
					{
						bestCost = sum;
					}
				}
			}
		}
		
		cout << "Case #" << count << ": "<< bestArea << " " << bestCost << "\n";
	}
	
	return 0;
}
