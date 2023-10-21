#include "sort.h"

/**
 * selection_sort - function sorts an array of integers in ascending order
 * @array: number of elements
 * @size: size of the array
*/

void selection_sort(int *array, size_t size)
{
int i, j, k;
int tmp_sw;

if (!array || !size)
{
return;
}
for (i = 0; i < size - 1; i++)
{
  for (j = size - 1, k = i + 1; j > i; j--)
  {
    if (array[j] < array[k])
    {
      k = j;
    }
  }
  if (array[i] > array[k])
  {
    tmp_sw = array[i];
    array[i] = array[k];
    array[k] = tmp_sw;
    print_array(array, size);
  }
}
}
