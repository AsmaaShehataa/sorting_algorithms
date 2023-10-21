#include "sort.h"
void lowmuto_scheme(int *my_arr, size_t size, size_t low, size_t high);
void func_swap(int *my_arr, size_t size, int *a, int *b);
/**
 * quick_sort - sorts an my_array in ascending order
 * @my_array: my_array to sort
 * @size: my_array size
 */
void quick_sort(int *my_array, size_t size)
{
	if (my_array && size > 1)
		lowmuto_scheme(my_array, size, 0, size - 1);
}
/**
 * lowmuto_scheme - sorts partition according to pivot
 * @my_arr: original my_array
 * @size: size of original my_array
 * @low: lowmost element of partition
 * @high: highmost element of partition
 */
void lowmuto_scheme(int *my_arr, size_t size, size_t low, size_t high)
{
	int pivot = my_arr[high]; /* pivot is last elem */
	size_t i, j;

	if (low < high)
	{
		for (i = j = low; j < high; j++)
		{
			if (my_arr[j] <= pivot)
			{
				func_swap(my_arr, size, &my_arr[j], &my_arr[i]);
				i++;
			}
		}
		func_swap(my_arr, size, &my_arr[j], &my_arr[i]);

		/* lesser partition */
		if (i > 0)
			lowmuto_scheme(my_arr, size, low, i - 1);
		/* greater partition */
		lowmuto_scheme(my_arr, size, i + 1, high);
	}
}
/**
 * func_swap - swap value of my_array elements
 * @my_arr: my_array (for print)
 * @size: size of my_array (for print)
 * @a: pointer to my_array element
 * @b: pointer to my_array element
 */
void func_swap(int *my_arr, size_t size, int *a, int *b)
{
	int tmprry;

	if (*a != *b)
	{
		tmprry = *a;
		*a = *b;
		*b = tmprry;
		print_my_array(my_arr, size); /* print updated my_array */
	}
}
