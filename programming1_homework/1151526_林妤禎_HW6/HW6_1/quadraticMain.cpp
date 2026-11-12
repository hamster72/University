#include"quadratic.h"
#include<iostream>
using namespace std;

int main ()
{
    Quadratic quad1 (2,3,1);
    quad1.print ();
    cout << endl;

    Quadratic quad3 (1,4,4);
    quad3.print();
    cout << endl;

    Quadratic quad4 (2,2,4);
    quad4.print();

    return 0;
}
