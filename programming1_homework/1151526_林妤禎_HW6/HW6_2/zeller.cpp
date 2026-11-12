#include"zeller.h"
#include<iostream>
using namespace std;

Zeller::Zeller( int x , int y , int z ) : month(x) , day(y) , year(z)
{
}

void Zeller::print()
{
	int weekday = ( day + 26*(month+1)/10 + year + year/4 - year/100 + year/400 ) %7;
	
	cout << month << "/" << day << "/" << year << " is ";
	switch( weekday )
	{
		case 1:
			cout << "Sunday";
			break;
		case 2:
			cout << "Monday";
			break;
		case 3:
			cout << "Tuesday";
			break;
		case 4:
			cout << "Wednesday";
			break;
		case 5:
			cout << "Thursday";
			break;
		case 6:
			cout << "Friday";
			break;
		case 7:
			cout << "Saturday";
			break;
			
	}
	 
}
