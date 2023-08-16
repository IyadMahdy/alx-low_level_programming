#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: Array
 * @size: Size of array
 * @action: Pointer to function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(arr[i]);
}
