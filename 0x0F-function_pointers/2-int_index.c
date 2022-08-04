#include "function_pointers.h"
/**
 * int_index - searches integer in integers array
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: A pointer used to compare valuees
 * Return: if no element matchesor size <= 0 --1
 * otherwise -the index of the first element for the
 * cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
