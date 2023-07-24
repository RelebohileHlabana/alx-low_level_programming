#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int mylength = 0;
	int k;

	while (*s != '\0')
	{
		mylength++;
		s++;
	}
	s--;
	for (k = mylength; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

