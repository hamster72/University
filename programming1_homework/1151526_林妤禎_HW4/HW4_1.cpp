#include <iostream>
using namespace std;

int main()
{
    
    int num[100];
    int number,i;
    
    cout << "Enter a number between 1 to 100:" << endl;
    cin >> number;
    
    for(i=1;i<=number;++i)
    {
        
        if(number%i==0)
        {
            num[i]=i;
            cout << num[i] << endl;
        }
    }
    
    
    return 0;
}