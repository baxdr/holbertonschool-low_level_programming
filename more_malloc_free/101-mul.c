#include "main.h"
/**
 * main - multiply 2 numbers passed as arguments
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    unsigned long mul;
    int i, j;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    /* Validate input */
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                exit(98);
            }
        }
    }

    /* Perform multiplication */
    mul = strtoul(argv[1], NULL, 10) * strtoul(argv[2], NULL, 10);
    printf("%lu\n", mul);

    return (0);
}

