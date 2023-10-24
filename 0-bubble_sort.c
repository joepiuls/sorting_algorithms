#include "sort.h"

/**
 * bubble_sort - sort list with the bubble
 * @array: array to be printed
 * @size: Num of elements in an array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int hold;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				hold = array[n];
				array[n] = array[n + 1];
				array[n + 1] = hold;
				print_array(array, size);
			}
		}
	}
}
