#include "rsa.h"
/**
 * is_prime - checks if the numbeer is prime
 *@n: number to check
 *
 * Return: 1
 */
int is_prime(long n)
{
    long i;

    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (i = 3; i <= n / i; i += 2)
    {
        if (n % i == 0) return 0;
    }
    return 1;
}
