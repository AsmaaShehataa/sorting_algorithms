#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers
 * @array: The array to be sorted
 * @size: Size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int t_sw, flag = 0;

	if (!array || !size)
	{
		return;
	}

    i = 0;
	while (i < size)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				t_sw = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t_sw;
				/* Print result */
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
        i++;
	}
}
