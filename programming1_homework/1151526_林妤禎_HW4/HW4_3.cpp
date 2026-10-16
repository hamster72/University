#include <iostream>
using namespace std;

int main()
{
    
    int num[10];
    int number,i,s;
    
    cout << "Enter a positive number:";
    cin >> number;
    
    for(i=0;number>0;++i)
    {
        num[i]=number%10;
        number/=10;
    }
    
    cout << "The reversed number is:";
    
    for(s=0;s<i;++s)
    	cout << num[s];

    return 0;
}
