#include "rsa.h"

/**
 * factorize_and_print - Factorizes n into primes and prints them
 * @n: Number to factorize
 */
void factorize_and_print(long n)
{
	long i, j;

	for (i = 2; i <= n / i; i++)
	{
		if (n % i == 0)
		{
			j = n / i;
			if (is_prime(i) && is_prime(j))
			{
				printf("%ld=%ld*%ld\n", n, i, j);
				return;
			}
		}
	}
	printf("Failed to factorize %ld into prime factors.\n", n);
}
