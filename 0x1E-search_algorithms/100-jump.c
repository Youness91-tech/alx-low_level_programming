#include "search_algos.h"
/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algo
 * @array: the pointer to the first element of the array
 * @size: the size of the array (number of elements)
 * @value: the value to search for int the array
 *
 * Return: first idx of the value or -1 if value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t stps, jmp, i;

	stps = sqrt(size);

	if (!array)
		return (-1);

	for (i = 0, jmp = 0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		i = jmp;
		jmp += stps;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jmp);

	if (jmp >= size)
		jmp = size - 1;

	for (; i <= jmp; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
