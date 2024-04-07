#include "main.h"


/**
 * main - Entry point, reads a number from a file and factorizes it
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    FILE *file; /* Variable declarations */
    long n;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]); /* Properly spaced */
        return (1);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return (1);
    }

    if (fscanf(file, "%ld", &n) != 1)
    {
        fprintf(stderr, "Error reading number from file.\n");
        fclose(file); /* Ensuring resources are freed before returning */
        return (1);
    }

    factorize_and_print(n); /* Calling the custom function */
    fclose(file); /* Ensuring the file is closed in all paths */
    return (0);
}
