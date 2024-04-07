#include "main.h"

/**
 * actorizeAndPrint - factorise a number
 * @n: parameter to be factorized
 * 
 * Return: null
*/

void factorizeAndPrint(long n)
{
    long i;
    for (i = 2; i <= n / i; ++i)
    {
        if (n % i == 0)
        {
            printf("%ld=%ld*%ld\n", n, n / i, i);
            return;
        }
    }
    printf("%ld=%ld*1\n", n, n);
}
