#include "main.h"

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
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(file, "%ld", &n) == 1)
    {
        factorizeAndPrint(n);
    }

    fclose(file);
    return 0;
}
