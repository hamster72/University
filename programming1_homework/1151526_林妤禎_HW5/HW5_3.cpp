#include <iostream>
using namespace std;

int main()
{
    
    int num[10];
    int number,i,s;
    
    cout << "Enter a positive integer:" << endl;
    cin >> number;
    
    for(i=0;number>0;++i)
    {
        num[i]=number%10;
        number/=10;
    }
    
    for(s=0;s<i;++s)
        cout << num[s];
    
    
    return 0;
}