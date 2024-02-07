#include "search_algos.h"

/**
 * _binary_search - searches for a value in an array of integers
 * using the Binary search algo
 * @array: the pointer to the first element of the array
 * @left: the left index
 * @right: the right index
 * @value: the value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (; left <= right;)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
			/* printf("%d, ", array[i]); */
		}
		printf("\n");
		/* printf("%d\n", array[i]); */
		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in an array of integers
 * using the Exponential search algo
 * @array: the pointer to the first element of the array
 * @size: the size of the array (number of elements)
 * @value: the value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}

	if (i >= size)
		right = size - 1;
	else
	{
		right = i;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (_binary_search(array, i / 2, right, value));
}
