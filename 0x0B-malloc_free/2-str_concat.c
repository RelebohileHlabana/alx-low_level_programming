#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - function that concatenates two strings.
* @s1: first string
* @s2: second string
*
* Return: a pointer to a newly allocated space in memory which
* contains the contents of s1, followed by the contents of s2,
* and null terminated. NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	int n, k, length1, length2, length;
	char *results;

	length1 = length2 = 0;

	if (s1 != NULL)
	{
		n = 0;
		while (s1[n++] != '\0')
			length1++;
	}
	if (s2 != NULL)
	{
		n = 0;
		while (s2[n++] != '\0')
			length2++;
	}

	length = length1 + length2;
	results = (char *)malloc(sizeof(char) * (length + 1));
	if (results == NULL)
		return (NULL);

	for (n = 0; n < length1; n++)
		results[n] = s1[n];
	for (k = 0; k < length2; k++, n++)
		results[n] = s2[k];
	results[length] = '\0';

	return (results);
}
