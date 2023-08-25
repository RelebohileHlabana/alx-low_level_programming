#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to find the square root recursively.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The square root of n if it's a perfect square, -1 otherwise.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
