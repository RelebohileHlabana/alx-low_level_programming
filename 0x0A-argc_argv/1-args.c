#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
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

	printf("Number of arguments: %d\n", argumentCount);

	return (0);
}
