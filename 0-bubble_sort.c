#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - function to perform bubble sort
 * @array: pointer to array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t j, temp, k;
	k = 0;

	if (array == NULL || size < 2)
		return;

	while (k == 0)
	{
		k = 1;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				print_array(array, size);
				k = 0;
			}
		}
	}
}
