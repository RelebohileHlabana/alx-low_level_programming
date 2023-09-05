#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2 dimensional array
* @width: width of array
* @height: height of array
*
* Return: a pointer to a 2 dimensional array of integers.
*/
int **alloc_grid(int width, int height)
{
	int **myarray, n, k;
	int len = width * height;

	if (len <= 0)
	return (NULL);

	myarray = (int **)malloc(sizeof(int *) * height);
	if (myarray == NULL)
	return (NULL);

	for (n = 0; n < height; n++)
	{
		myarray[n] = (int *)malloc(sizeof(int) * width);
		if (myarray[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(myarray[n]);
			free(myarray);
	return (NULL);
		}
	}
	for (n = 0; n < height; n++)
		for (k = 0; k < width; k++)
			myarray[n][k] = 0;

	return (myarray);
}
