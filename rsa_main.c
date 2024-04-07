#include "rsa.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: character pointer to the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
    FILE *file;
    long n;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    if (fscanf(file, "%ld", &n) != 1)
    {
        fprintf(stderr, "Error reading number from file.\n");
        fclose(file);
        return 1;
    }

    factorize_and_print(n);

    fclose(file);
    return 0;
}
