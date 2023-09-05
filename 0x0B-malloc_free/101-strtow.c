#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, word_count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
	}

	return (word_count);
}

/**
 * allocate_and_copy - Allocate memory for a string and copy a substring.
 * @str: The input string.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 * Return: A pointer to the new string, or NULL on failure.
 */
char *allocate_and_copy(char *str, int start, int end)
{
	int i, j = 0;
	char *substring;

	substring = malloc(sizeof(char) * (end - start + 2));
	if (substring == NULL)
		return (NULL);

	for (i = start; i <= end; i++)
		substring[j++] = str[i];

	substring[j] = '\0';
	return (substring);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 * Return: An array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, k = 0, word_count = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] && k < word_count; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[i] && str[i] != ' ')
				i++;
			i--;
			words[k] = allocate_and_copy(str, j, i);
			if (words[k] == NULL)
			{
				while (k >= 0)
					free(words[k--]);
				free(words);
				return (NULL);
			}
			k++;
		}
	}

	words[k] = NULL;
	return (words);
}

