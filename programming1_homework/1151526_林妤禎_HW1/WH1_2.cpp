#include <iostream>
using namespace std;

int main()
{
	int length,area,perimeter;
	cout << "Enter the length of a side:";
	cin >> length;
	area = length*length;
	perimeter = length*4;
	cout << "The area is:" << area << endl;
	cout << "The perimeter is:" << perimeter ;
	return 0;
}
