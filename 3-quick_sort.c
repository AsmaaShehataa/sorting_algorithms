#include "sort.h"

/**
 * func_swap - function swaps bet two ints
 * @my_array: my_array to be sorted
 * @size: size of the my_array
 * @am: 1st value position
 * @bm: 2nd value positon


void func_swap(int *my_array, size_t size, int *am, int *bm)
{
if (*am != *bm)
{
*am = *am + *bm;
*bm = *am - *bm;
*am = *am - *bm;
print_my_array((const int *)my_array, size);
}
}


 * lowmuto_scheme - partify the my_array
 * @my_array: my_array to be sorted
 * @size: size of the my_array
 * @high: highghighest value in the my_arr
 * @low: lowwest value in the my_arr
 * Return: size_t

size_t lowmuto_scheme(int *my_array, size_t size, ssize_t low, ssize_t high)
{
int i, j, pivot = my_array[high];

for (i = j = low; j < high; j++)
if (my_array[j] < pivot)
func_swap(my_array, size, &my_array[j], &my_array[i++]);
func_swap(my_array, size, &my_array[i], &my_array[high]);
return (i);
}


 * my_quickksurt - quicksort via lowmuto part scheme
 * @my_array: my_array to be sorted
 * @size: size of the my_array
 * @high: highghighest value in the my_arr
 * @low: lowwest value in the my_arr

void my_quickksurt(int *my_array, size_t size, ssize_t high, ssize_t low)
{
if (low < high)
{
size_t pvt = lowmuto_scheme(my_array, size, low, high);
my_quickksurt(my_array, size, low, pvt - 1);
my_quickksurt(my_array, size, pvt + 1, high);
}
}


 * quick_sort - function that sorts an my_array of integers in ascending
 * @my_array: my_array to be sorted
 * @size: size of the my_array

void quick_sort(int *my_array, size_t size)
{
if (my_array == NULL || size == 0)
return;
my_quickksurt(my_array, size, 0, size - 1);
}
*/

void loumoto_scheme(int *my_arr, size_t size, size_t low, size_t high);
void func_swap(int *my_arr, size_t size, int *a, int *b);
/**
 * quick_sort - function sorts an my_array in ascending order
 * @my_array: my_array to sort
 * @size: my_array size
 */
void quick_sort(int *my_array, size_t size)
{
	if (my_array && size > 1)
		loumoto_scheme(my_array, size, 0, size - 1);
}
/**
 * loumoto_scheme - sorts partition according to pivot
 * @my_arr: original my_array
 * @size: size of original my_array
 * @low: lowmost element of partition
 * @high: highmost element of partition
 */
void loumoto_scheme(int *my_arr, size_t size, size_t low, size_t high)
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
			loumoto_scheme(my_arr, size, low, i - 1);
		/* greater partition */
		loumoto_scheme(my_arr, size, i + 1, high);
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
	int tmp;

	if (*a != *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		print_my_array(my_arr, size); /* print updated my_array */
	}
}