#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int argumentCount;
	(void)argv;/* argv is intentionally unused */

	argumentCount = argc - 1;

	printf("%d\n", argumentCount);

	return (0);
}

