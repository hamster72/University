#include <iostream>
using namespace std;

long long factorial( int num )
{
	long long fact = 1;
    for ( int i = 1; i <= num; ++i ) fact *= i;
    return fact;
}


int main()
{
    int n,k;
    
    cout <<"Enter a positive integer for n (1 to 20):";
    cin >> n;
    cout <<"Enter a positive integer for k (k <= n):";
	cin >> k;

	long long ans = factorial(n) / factorial(n - k);
		
	cout << "Permutation of n object k at a time:" << ans;
    
    return 0;
}
