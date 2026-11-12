#include"zeller.h"
#include<iostream>
using namespace std;

int main ()
{
	
	// Instantiation and printing weekday for first object 
    Zeller z1 (3,29,2016);
    z1.print();
    cout << endl;

	// Instantiation and printing weekday for second object 
    Zeller z2 (5,24,2015);
    z2.print();
    cout << endl;

	// Instantiation and printing weekday for third object
    Zeller z3 (8,7,2017);
    z3.print();

    return 0;
}
