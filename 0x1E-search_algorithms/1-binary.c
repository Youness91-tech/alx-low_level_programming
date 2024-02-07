#include "search_algos.h"
/**
 *  * binary_search - searches for a value in an array of integers
 *   * using the Binary search algo
 *    * @array: the pointer to the first element of the array
 *     * @size: the size of the array (number of elements)
 *      * @value: the value to search for int the array
 *       *
 *        * Return: first index of the value or -1 if value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
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
