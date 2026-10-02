#include <iostream>
using namespace std;

int main()
{
    
    int num[100],divisor[100];
    int num1,num2,i,ans;
    
    cout << "Enter the first number :" << endl;
    cin >> num1;
    cout << "Enter the second number :" << endl;
    cin >> num2;
    
    if (num1 < num2)
    {
        i = num1;
        num1 = num2;
        num2 = i;
    }
    
    for(i=0;i<num2;++i)
    {
        if(num2%i==0)
            num[i]= i;
            
        if(num1%num[i]==0)
           {
            divisor[i]= num[i];
            ans = divisor[i];
           }
    }
    
    cout << endl << ans;
    
    return 0;
}