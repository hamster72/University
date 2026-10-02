#include<iostream>
#include<iomanip> 
using namespace std;

float checkValue,shareCharge1,shareCharge2,shareCharge3;
 
main()
{
	cout << "Enter check value:";
	cin >> checkValue;
	checkValue *= 1.295;
	shareCharge1 = checkValue/36*14;
	shareCharge2 = checkValue/36*11;
	shareCharge3 = checkValue/36*11;

	cout << "Total check after tax and tip :" << checkValue << endl;
	cout << "Family 1 pays:" << fixed << setprecision(2) << shareCharge1 << endl;
	cout << "Family 2 pays:" << fixed << setprecision(2) << shareCharge2 << endl;
	cout << "Family 3 pays:" << fixed << setprecision(2) << shareCharge3;
	
	return 0;
}

