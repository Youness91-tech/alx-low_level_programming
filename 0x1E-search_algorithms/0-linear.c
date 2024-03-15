#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algo
 * @array: the pointer to the first element of the array
 * @size: the size of the array (number of elements)
 * @value: the value to search for int the array
 *
 * Return: first index of the value or -1 if value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
