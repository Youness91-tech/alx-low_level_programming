#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pntr;
	int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pntr = malloc(sizeof(int) * size);

	if (pntr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pntr[x] = min++;

	return (pntr);
}
