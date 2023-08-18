#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
