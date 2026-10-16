#include <iostream>
using namespace std;

int main()
{
    
    int num[100];
    int number,i;
    
    cout << "Enter a number between 1 & 100:";
    cin >> number;
    cout << "Factors are:" << endl;
    
    for(i=1;i<=number;++i)
    {
        
        if(number%i==0)
        {
            num[i]=i;
            cout << num[i] << " ";
        }
    }
    
    return 0;
}
