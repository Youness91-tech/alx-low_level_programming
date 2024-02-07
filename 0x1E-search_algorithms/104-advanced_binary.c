#include "search_algos.h"
/**
 * rec_binary_search - searches for a value in an array of integers
 * using the Binary search algo
 * @array: the pointer to the first element of the array
 * @size: the size of the array (number of elements)
 * @value: the value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int rec_binary_search(int *array, size_t size, int value)
{
	size_t md = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (md && size % 2 == 0)
	{
		md--;
	}

	if (value == array[md])
	{
		if (md > 0)
			return (rec_binary_search(array, md + 1, value));
		else
			return ((int)md);
	}

	if (value < array[md])
	{
		return (rec_binary_search(array, md + 1, value));
	}
	else
	{
		return (rec_binary_search(array + md + 1, size - md - 1, value) + md + 1);
	}
}
/**
 * advanced_binary - searches for a value in an array of integers
 * using the Binary search algo
 * @array: the pointer to the first element of the array
 * @size: the size of the array (number of elements)
 * @value: the value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = rec_binary_search(array, size, value);
	if (i >= 0 && array[i] == value)
		return (i);
	else
		return (-1);
}
