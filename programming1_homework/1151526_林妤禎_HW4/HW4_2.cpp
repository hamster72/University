#include <iostream>
#include<utility>
using namespace std;

int main()
{
    int num1,num2,m,n;
    
    cout << "Enter the first number (positive):";
    cin >> m;
    num1 = m;
    cout << "Enter the second number (positive):";
    cin >> n;
    num2 = n;
    
    while(n!=0)
    {
    	m = m % n;
    	if(m < n)
    		swap(m,n);
	}
    
    cout << "The greatest common divisor (GCD) between " << num2 << " and " << num1 << " is:" << m;
    
    return 0;
}
