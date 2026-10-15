#include<iostream>
using namespace std;

int main()
{
	int num,ans[num];
	while(cin >> num)
	{
		for( int i=num ; i>0 ; --i)
		{
		cin >> ans[i];
		ans[i] = (ans[i]*567/9+7492)*235/47-498;
		}
	
		for( int i=num ; num>0 ; --i)
		{
		ans[i]=ans[i]/10%10;
		
		if(ans[i]<0)
			ans[i]*= -1;
			
		cout << ans[i] << endl;
		num -= 1;
		}	
	}
	
	return 0;
 } 
