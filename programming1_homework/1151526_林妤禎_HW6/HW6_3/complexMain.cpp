#include "complex.h" 
#include<iostream>
using namespace std;

int main () 
{ 
	// Instantiation of four complex numbers 
	Complex complex1 (2.0, 3.0); 
	Complex complex2 (3.0, 4.0); 
	Complex complex3 (5.0, 4.0); 
	Complex complex4 (6.0, 5.0); 
	
	// Instantiation a complex number to be used in operation 
	Complex temp (2.0, 1.0); 
	
	// Applying operations on the four complex numbers 
	complex1.addTo (temp); 
	complex2.subtractFrom (temp); 
	complex3.multiplyBy (temp); 
	complex4.divideBy (temp); 
	
	// Printing the result of operations 
	cout << "complex1+temp = "; 
	complex1.print (); 
	cout << "complex2-temp = "; 
	complex2.print (); 
	cout << "complex3*temp = "; 
	complex3.print (); 
	cout << "complex4/temp = "; 
	complex4.print (); 
	return 0; 
}
