#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins to make change
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins[] = {25, 10, 5, 2, 1}, num_coins = 5, total_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 0; i < num_coins; i++)
	{
		total_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", total_coins);

	return (0);
}
