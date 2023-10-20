#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * @array: The array to be sorted
 * @size: Size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
  int t_swap;
  size_t i, j;

  if (!array || !size)
    return;
  i = 0;
  while (i < size)
  {
    for (j = 0; j < size; j++)
    {
      if (array[j] > array[j + 1])
      {
        t_swap = array[j];
        array[j] = array[j + 1];
        array[j + 1] = t_swap;
        print_array(array, size);
      }
    }
    i++;
  }
}
