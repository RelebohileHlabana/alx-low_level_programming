#include "main.h"

/**
 * is_prime_helper - Check if a number is prime (helper function).
 * @n: The number to check.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
