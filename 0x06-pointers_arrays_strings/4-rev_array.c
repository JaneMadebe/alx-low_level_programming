#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: an array of integers to be reversed
 * @n: the number of elements to swap in the array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[index] = tmp;
	}
}
