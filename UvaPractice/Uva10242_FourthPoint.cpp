#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4,x5,y5;
	
	while( cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
	{
		if( x1==x2 && y1==y2)
		{
			x5 = x3+x4-x1;
			y5 = y3+y4-y1;
		}
		else if( x2==x3 && y2==y3)
		{
			x5 = x1+x4-x2;
			y5 = y1+y4-y2;
		}
		else if( x3==x4 && y3==y4)
		{
			x5 = x1+x2-x3;
			y5 = y1+y2-y3;
		}
		else if( x1==x4 && y1==y4)
		{
			x5 = x2+x3-x1;
			y5 = y2+y3-y1;
		}
		else if( x1==x3 && y1==y3)
		{
			x5 = x2+x4-x1;
			y5 = y2+y4-y1;
		}
		else if( x2==x4 && y2==y4)
		{
			x5 = x1+x3-x2;
			y5 = y1+y3-y2;
		}
		
		cout << fixed << setprecision(3) << x5 << " " << y5 << endl;
	}
	
	return 0;
}
