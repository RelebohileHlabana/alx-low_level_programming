#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of the number, or -1 if error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}