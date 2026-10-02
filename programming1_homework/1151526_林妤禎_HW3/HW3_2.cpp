#include <iostream>
using namespace std;

int main()
{
	int number;
	float price,discount,total;

    cout << "Enter number of items:";
    cin >> number;
    cout << "Enter unit price:";
    cin >> price;    
    price *= number;
    
    if (number>0 && number<10)
        discount = 0;
    else if (number>9 && number<50)
        discount = price*0.03;
    else if (number>49 && number<100)
        discount = price*0.05;
    else if (number>99)
        discount = price*0.1;
    
    total = price-discount;
    
    cout << "Subtotal:" << price << endl;
	cout << "Discount:" << discount << endl;
	cout << "Total:" << total;
    return 0;
}
