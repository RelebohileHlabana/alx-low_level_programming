#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: size of array
* @c: char to assign
* Description: create array of size size and assign char c
* Return: pointer to the array, or NULL if it fails
*
*/
char *create_array(unsigned int size, char c)
{
	 char *ptr;
	 unsigned int k;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)

		return (NULL);

	for (k = 0; k < size; k++)

		ptr[k] = c;

	return (ptr);
}
