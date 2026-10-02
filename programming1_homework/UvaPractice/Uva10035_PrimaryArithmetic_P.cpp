#include<iostream>
using namespace std;

int main()
{
	//count the number of carry operations

    int num1,num2,carry,count=0,i;
    while( num1 != 0 && num2 != 0 )
    {
        while( num1 > 0 || num2 >0 )
        {
            cin >> num1 >> num2;

             if (num1 % 10 + num2 % 10 + carry >= 0)
            {
                carry = 1;
                count += carry;
                num1 /= 10 , num2 /= 10;
            }
            else
                num1 /= 10 , num2 /= 10;

        }

        if( count = 0)
            cout << "No carry operation.";
        else if( count = 1 )
            cout << "1 carry operation.";
        else
            cout << count << " carry operations.";
           
    }
    
    return 0;
}
