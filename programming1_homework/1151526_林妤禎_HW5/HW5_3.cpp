#include <iostream>
#include<iomanip>
using namespace std;

void printEmirpNumbers() 
{
	int prime[1000],ans[100]={0};
	
	for ( int i=0 ; i<1000 ; ++i ) prime[i]=i;
	
	// Prime
	for ( int i=2 ; i<1000 ; ++i )
	{
		if( prime[i]!=0 )
    	{
    		for( int j=i*i ; j<1000 ; j+=i ) prime[j]=0;
		}
		
	}
	
	// Emirp
	for( int i=2,j=0 ; i<1000 ; ++i )
	{
    	if( prime[i]!=0 )
    	{
    		int temp = i;
    	    int rev = 0;
    	    while( temp>0 )
    	    {
    	    	rev = rev*10 + temp%10;
    	    	temp /= 10;
			}
			
			if( prime[rev]!=0 )
    		{
    			ans[j]=i;
    			++j;
			}	
		}
    }
    
    cout << "The emirp numbers less than 1000:" << endl;
    for( int i=0 ; i<100 ; ++i )
    {
    	if(ans[i]==0 ) break;
    	if( i!=0 && i%10==0 ) cout << endl;
    	cout << setw(4) << ans[i];
	}
	
}


int main()
{
    printEmirpNumbers();
    	
    return 0;
}
