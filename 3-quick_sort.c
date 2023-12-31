#include "sort.h"

/**
 * func_swap - function swaps bet two ints
 * @array: array to be sorted
 * @size: size of the array
 * @am: 1st value position
 * @bm: 2nd value positon
*/
void func_swap(int *array, size_t size, int *am, int *bm)
{
if (*am != *bm)
{
*am = *am + *bm;
*bm = *am - *bm;
*am = *am - *bm;
print_array((const int *)array, size);
}
}

/**
 * lowmuto_scheme - partify the array
 * @array: array to be sorted
 * @size: size of the array
 * @high: highghighest value in the my_arr
 * @low: lowwest value in the my_arr
 * Return: size_t
*/
size_t lowmuto_scheme(int *array, size_t size, ssize_t low, ssize_t high)
{
int i, j, pivot = array[high];

for (i = j = low; j < high; j++)
if (array[j] < pivot)
func_swap(array, size, &array[j], &array[i++]);
func_swap(array, size, &array[i], &array[high]);
return (i);
}

/**
 * my_quickksurt - quicksort via lowmuto part scheme
 * @array: array to be sorted
 * @size: size of the array
 * @high: highghighest value in the my_arr
 * @low: lowwest value in the my_arr
*/
void my_quickksurt(int *array, size_t size, ssize_t high, ssize_t low)
{
if (low < high)
{
size_t pvt = lowmuto_scheme(array, size, low, high);
my_quickksurt(array, size, low, pvt - 1);
my_quickksurt(array, size, pvt + 1, high);
}
}
/**
 * quick_sort - function that sorts an array of integers in ascending
 * @array: array to be sorted
 * @size: size of the array
*/
void quick_sort(int *array, size_t size)
{
if (!array || !size)
return;
my_quickksurt(array, size, 0, size - 1);
}
