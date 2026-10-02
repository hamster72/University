#include<iostream>
using namespace std;

int main()
{
	int time,cost;
	char type;
	cout << "Input type of vehicle: car (c) bus (b) truck (t):" ;
	cin >> type;
	cout << "Input the number of hours:" ;
	cin >> time;
	
	if (type=='c')
	cost = 2*time;
	else if(type=='b')
	cost = 3*time;
	else if(type=='t')
	cost = 4*time;
	
	cout << "You owe us:$" << cost << endl << "Thank you for parking with us";
	
	return 0;
}
