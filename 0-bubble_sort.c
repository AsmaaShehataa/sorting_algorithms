#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * @array: The array to be sorted
 * @size: Size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int t_swap;

	if (array == NULL || size == 0)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				t_swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t_swap;
				/* Print result */
				print_array(array, size);
			}
i++;
		}
	}
}
