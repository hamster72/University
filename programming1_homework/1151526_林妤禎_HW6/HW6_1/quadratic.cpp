#include"quadratic.h"
#include<iostream>
#include<cmath>
using namespace std;

Quadratic::Quadratic( double x , double y , double z ) : a(x) , b(y) , c(z)
{
}

void Quadratic::print()
{
	cout << a << "x^2+" << b << "x+" << c << endl;
	
	//
	double delta = b*b - 4*a*c;
	
	
	if( delta>0 ) 
	{
		double root1 = (-b + sqrt(delta)) / (2*a);
		double root2 = (-b - sqrt(delta)) / (2*a);
		cout << "Root1: " << root1 << " Root2: " << root2 << endl;
	}
	else if ( delta==0 )
	{
		double root = -b / (2*a);
		cout << "Root1: " << root << "  Root2: " << root << endl;
	}
	else
	{
		cout << "The equation has no roots." << endl;
	}
	 
}
