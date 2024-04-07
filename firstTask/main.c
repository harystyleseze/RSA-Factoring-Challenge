#include "main.h"

/**
 * main - Program that performs simple operations.
 * @argc: Number of arguments.
 * @argv: Character pointer to the array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[]) {
    FILE *file;
    long n;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(file, "%ld", &n) == 1) {
        factorize_and_print(n);
    }

    fclose(file);
    return 0;
}
