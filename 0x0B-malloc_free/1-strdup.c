#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - pointer to a newly allocated space in memory
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	char *sss;
	int a, n = 0;

	if (str == NULL)

		return (NULL);

	a = 0;

	while (str[a] != '\0')
		a++;

	sss = malloc(sizeof(char) * (a + 1));

	if (sss == NULL)

		return (NULL);

	for (n = 0; str[n]; n++)

		sss[n] = str[n];

	return (sss);
}
