#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * @array: The array to be sorted
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{

	size_t num_count, num_count2, mini_vle, tmp_sw;



	if (!array || !size)
	{
		return;
	}


	for (num_count = 0; num_count < size - 1; num_count++)
	{

		mini_vle = num_count;


		for (num_count2 = num_count + 1; num_count2 < size; num_count2++)
		{
			if (array[num_count2] < array[mini_vle])
			{
				mini_vle = num_count2;
			}
		}
		if (mini_vle != num_count)
		{
		
			tmp_sw = array[mini_vle];
			array[mini_vle] = array[num_count];
			array[num_count] = tmp_sw;
			print_array(array, size);
		}
	}
}
