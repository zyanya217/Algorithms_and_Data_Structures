/*
The user inputs a value and the program outputs its prime number.
 */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x);
int main()
{
	int n = 0;
	cin >> n;
		
	for(int i=2 ; i<=n ; i++)
	{
		if(isPrime(i) == true)
		cout << i<< " ";
	}
	return 0;
}

bool isPrime(int x)
{
	for(int i=2; i * i <= x;i++) 
	{
		if(x % i ==0)
			return false;
	}
	return true;
}
