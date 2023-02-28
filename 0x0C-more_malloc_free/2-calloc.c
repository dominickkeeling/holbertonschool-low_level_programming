#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _calloc - write a function that allocates memory to an array using malloc
* The _calloc function allocates memory for an array of nmemb elements of
* size bytes each and returns a pointer to the allocated memory.
* The memory is set to zero
* If nmemb or size is 0, then _calloc returns NULL
* If malloc fails, then _calloc returns NULL
* @nmemb: num of elements
* @size: num of bytes
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if ((nmemb == 0) || (size = 0))
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
