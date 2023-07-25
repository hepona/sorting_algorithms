#include "sort.h"
/**
 * bubble_sort - sort array of integer
 * @array: array of integer
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int tmp = 0;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
}
}
}