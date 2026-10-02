#include<iostream> 
#include <iomanip>
using namespace std;

int tv,dvd,control;
float tvSets,dvdPlayers,remoteControllers,subtotal,tax,total;
 
main()
{
	cout << "How many TVs were sold?";
	cin >> tv;
	tvSets = tv*1400;
	cout << "How many DVDs were sold?";
	cin >> dvd;	
	dvdPlayers = dvd*220;
	cout << "How many remote controllers were sold?";
	cin >> control;
	remoteControllers = control*35.2;
	
	subtotal =  tvSets + dvdPlayers + remoteControllers;
	tax = subtotal*0.0825;
	total = subtotal+tax;
	
	cout << "Quantity\tDescription\tUnit Price\tTotal Price" << endl;
	cout << tv << "\t\tTV" << "\t\t1400\t\t" << tvSets << endl;
	cout << dvd << "\t\tDVD" << "\t\t220\t\t" << dvdPlayers << endl;
	cout << control <<"\t\tRemote" << "\t\t35.2\t\t" << remoteControllers << endl;
	
	cout << "Total before tax\t\t\t\t" << subtotal << endl;
	cout << "Tax\t\t\t\t\t\t" << fixed << setprecision(2) << tax << endl;
	cout << "Total\t\t\t\t\t\t" << total;
	return 0;
}
