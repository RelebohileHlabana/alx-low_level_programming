#include <stdio.h>

/**
 * main - a program that writes the alphabet,
 * followed by a new line
 * Return:0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
