#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	return (ptr);
}
