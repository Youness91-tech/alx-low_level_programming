#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algo
 * @array: The pointer to the first element of the array
 * @size: The size of the array (number of elements)
 * @value: value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t indx;

	if (!array)
		return (-1);

	for (indx = 0; indx < size; indx++)
	{
		printf("Value checked array[%ld] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);
	}
	return (-1);
}
