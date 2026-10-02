#include <iostream>
using namespace std;

int main()
{
	int hours=4,minutes=22,seconds=53;
	while(hours>0)
	{
		seconds+=3600;
		hours--; 
	}
	while(minutes>0)
	{
		seconds+=60;
		minutes--; 
	}
	cout << "Total seconds:" << seconds;
	return 0;
}
