#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int lenX,lenY;
	string x,y;
	
	while( cin >> lenX >> x >> lenY >> y )
	{
		vector< vector<int> > ed( lenX+1 , vector<int>(lenY+1,0) );
	
		for( int i=0 ; i<=lenX ; ++i ) ed[i][0] = i;
		for( int i=0 ; i<=lenY ; ++i ) ed[0][i] = i;
		
		for( int i=1 ; i<=lenX ; ++i )
		{
			for( int j=1 ; j<=lenY ; ++j )
			{
				if( x[i-1]==y[j-1] )
					ed[i][j]=ed[i-1][j-1];
				else
				{
					int delCost = ed[i-1][j];
					int insCost = ed[i][j-1];
					int repCost = ed[i-1][j-1];
					
					ed[i][j] = min( delCost, min(insCost,repCost) ) +1;
				}	
					
			}
				
	}
		
	cout << ed[lenX][lenY] << endl;	
	
	}
	
	return 0;	
}	
