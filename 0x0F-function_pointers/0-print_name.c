#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified format function
 * @name: Name of the person
 * @f: Pointer to the format function to use
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
