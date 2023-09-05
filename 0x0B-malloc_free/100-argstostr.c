#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int i, j, k;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++; /* for the newline character */
	}

	concatenated_str = malloc(sizeof(char) * (total_len + 1));
	if (concatenated_str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated_str[k] = av[i][j];
			k++;
		}
		concatenated_str[k] = '\n';
		k++;
	}
	concatenated_str[k] = '\0';

	return (concatenated_str);
}

