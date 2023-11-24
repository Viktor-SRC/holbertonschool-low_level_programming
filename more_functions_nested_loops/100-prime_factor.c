#include <stdio.h>
#include <math.h>

typedef long int (ll);
{

ll maxPrimeFactors(ll n) 
{
	ll maxPrime = -1;
	ll i;

	while (n % 2 == 0) 
	{
		maxPrime = 2;
		n >>= 1; /* equivalent to n /= 2 */
	}

	/* n must be odd at this point, thus skip the even numbers and iterate only for odd integers */
	for (i = 3; i <= sqrt(n); i += 2) 
	{
		while (n % i == 0) 
		{
			maxPrime = i;
			n = n / i;
		}
	}
/* This condition is to handle the case when n is a prime number greater than 2 */
	if (n > 2)
		maxPrime = n;

	return maxPrime;
}

int main() {
	ll n = 612852475143;
	printf("%ld\n", maxPrimeFactors(n));
	return (0);
}

