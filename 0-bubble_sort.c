#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *                using the Bubble sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				/* Print the array after the swap */
				for (k = 0; k < size; k++)
				{
					printf("%d", array[k]);
					if (k < size - 1)
						printf(", ");
				}
				printf("\n");
			}
		}

		/* If no two elements were swapped in inner loop, the array is sorted */
		if (swapped == 0)
			break;
	}
}
