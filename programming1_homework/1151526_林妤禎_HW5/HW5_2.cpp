#include <iostream>
using namespace std;

void printPascalTriangle( int n ) 
{
    int ans[12][12] = {0}; 
    ans[0][0] = 1;
    
    for ( int i = 1; i < n + 1; ++i ) 
	{
        for ( int j = 0; j < i + 1; ++j ) 
		{
            if ( j == 0 ) ans[i][j] = ans[i-1][j];
            else ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    
    cout << "The coefficients are shown below:" << endl;
    for ( int i=0 ; i<n+1 ; ++i )
    {
    	for( int j=0 ; j<i+1 ; ++j ) cout << ans[i][j] << " ";
		cout << endl;
	}
    
}


int main()
{
	int n;
	
    cout << "Enter the size of the Pascal triangle:";
    cin >> n;
    
    printPascalTriangle(n);
    
    return 0;
}
