#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: an array of integers to be reversed
 * @n: the number of elements to swap in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
	int temp = a[i];

	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;
	}
}
