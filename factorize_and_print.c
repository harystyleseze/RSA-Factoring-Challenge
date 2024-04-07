#include "rsa.h"

/**
 * actorize_and_print - program that factorizes simple operations
 * @n: number to factorizee
 *
 * Return: Always 0 (Success)
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
                printf("%ld=%ld*%ld\n", n, j, i);
                return;
            }
        }
    }
    printf("Failed to factorize %ld into prime factors.\n", n);
}
