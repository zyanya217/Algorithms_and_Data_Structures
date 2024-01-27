/*
The user inputs a value and the program outputs its prime number.
 */

#include <iostream>
using namespace std;

void ruleOutPrime(int x,bool isPrime[], int n)
{
	for(int i = 1; x * i < n; i++)
	isPrime[x * i] = false ;
}

int main()
{
	int n = 0;
	cin >> n;	
	for(int i = 0; i < n; i++)
		isPrime[i] = true;
		
	for(int i = 2; i <= n; i++)
	{
		if(isPrime[i] == true)
		{
			cout << i<< " ";
			ruleOutPrime(i, isPrime, n);	
		}
	}
	return 0;
}
