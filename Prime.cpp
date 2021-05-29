#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
	for(int i = 0 ; i < sqrt(n); i++)
	  if(n%i == 0)
	   return false;
	return true;
}

int main()
{
	cout << isPrime(3) ;
	return 0 ;
}
