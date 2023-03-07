#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @a: square matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[k];
			if (i + j == size - 1)
				sum2 += a[k];
			k++;
		}
	}

	printf("%d, %d", sum1, sum2);
}
