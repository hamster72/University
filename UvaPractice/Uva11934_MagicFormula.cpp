#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,l;
	while( cin >> a >> b >> c >> d >> l)
	{
		int count=0;
		
		if(a==0 && b==0 && c==0 && d==0 && l==0)
			break;
		
		for( int i=0 ; i<=l ; ++i)
			{
				if( (a*i*i + b*i + c)%d == 0)
					count += 1;
			}
		
		cout << count << endl;
	}
	
	return 0;
}
