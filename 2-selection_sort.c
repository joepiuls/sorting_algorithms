#include "sort.h"

/**
 * selection_sort - sort list with the selection_sort
 * @array: The array to be printed
 * @size: Number of elements in an array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, less, tmp, swap;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (less = i, j = i; j < size; j++)
			if (array[j] < array[less])
			{
				less = j;
				swap = 1;
			}
		if (swap == 1)
		{
			tmp = array[less];
			array[less] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swap = 0;
		}
	}
}
