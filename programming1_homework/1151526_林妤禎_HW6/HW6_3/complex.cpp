#include"complex.h"
#include<iostream>
#include<iomanip>
using namespace std;

Complex::Complex( double x , double y ) : real(x) , imag(y)
{
}


void Complex::addTo( Complex other )
{
	real = real + other.real;
	imag = imag + other.imag;
}
void Complex::subtractFrom( Complex other )
{
	real = real - other.real;
	imag = imag - other.imag;
}
// (a+bi)*(c+di) = (ac-bd)+(ad+bc)i
void Complex ::multiplyBy( Complex other )
{
	double newReal = real * other.real - imag * other.imag;
	double newImag = real * other.imag + imag * other.real;
	real = newReal;
	imag = newImag;
}
// (a+bi)/(c+di) = ( (ac+bd)+(bc-ad)i ) / ( c*c+d*d )
void Complex::divideBy( Complex other )
{
	double denominator = other.real * other.real + other.imag * other.imag;
	if( denominator==0 )
	{
		cout << "Error: Division by zero." << endl;
		return;
	}
	else
	{
		double newReal = ( real * other.real + imag * other.imag ) / denominator;
		double newImag = ( imag * other.real - real * other.imag ) / denominator;
		real = newReal;
		imag = newImag;
	}
}


void Complex::print()
{
	cout << "(" << showpos << fixed << setprecision(2) << real << ")+i(" << imag << noshowpos << ")" << endl; 
}

