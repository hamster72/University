#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
	while(cin >> num1 >> num2) 
	{
		if(num1 == 0 && num2 == 0)
            break;
		int carry=0,count=0;
	    while( num1 > 0 || num2 >0 )
        {
            if (num1 % 10 + num2 % 10 + carry >= 10)
            {
                carry = 1;
                count += 1;
                num1 /= 10 , num2 /= 10;
            }
            else
            {
            	carry = 0;
            	num1 /= 10 , num2 /= 10;
			}

        }

        if( count == 0)
            cout << "No carry operation.\n";
        else if( count == 1 )
            cout << "1 carry operation.\n";
        else
            cout << count << " carry operations.\n";
        		
	}
    return 0;    
}
