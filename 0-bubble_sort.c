#include "sort.h"

/**
 * bubble_sort - function sorts an array of integers
 * @array: The array to be sorted
 * @size: Size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp_swap, flag = 0;

	/*Check inputs*/
	if (array == NULL || size == 0)
	{
		return;
	}

	/* Counts through the current step in the sort */
	for (i = 0; i < size - 1; i++)
	{
		/* Loop through array */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap a[i] with a[1 + 1] */
				temp_swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp_swap;
				/* Print result */
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
