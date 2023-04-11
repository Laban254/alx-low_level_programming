#include "search_algos.h"

/**
 * linear_search - it searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t s;

	if (array == NULL)
	{
		return (-1);
	}

	for (s = 0; s < size; s++)
	{
		printf("Value checked array[%li] = [%i]\n", s, array[s]);
		if (array[s] == value)
		{
			return (s);
		}
	}
	return (-1);
}
