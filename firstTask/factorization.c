#include "main.h"

/**
 * factorize_and_print - Factorizes a number into two factors and prints them
 * @n: The number to be factorized
 *
 * Description: This function attempts to factorize a given long integer, n,
 * into two factors. If a factorization is found, it prints the factors in the
 * format "n=factor1*factor2". If no factorization other than by 1 is found,
 * it prints "n=n*1".
 */
void factorize_and_print(long n) {
    long i, j;
    int found = 0;

    for (i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            j = n / i;
            if (is_prime(i) && is_prime(j)) {
                printf("%ld=%ld*%ld\n", n, i, j);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        for (i = 2; i <= n; ++i) {
            if (n % i == 0) {
                printf("%ld=%ld*%ld\n", n, n / i, i);
                return;
            }
        }
    }
}
