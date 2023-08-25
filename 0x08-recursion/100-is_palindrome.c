#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _check_palindrome - Check if a string is a palindrome.
 * @s: The string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (_check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
		return (1);
	return (_check_palindrome(s, 0, length - 1));
}
