#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements to allocate
 * @size: size in bytes of each element
 *
 * Description: Allocates memory for an array of nmemb elements of
 * size bytes each. Each byte of the allocated memory is set to 0.
 * If nmemb or size is 0, or if malloc fails, the function returns NULL.
 *
 * Return: pointer to the allocated memory, or NULL if allocation fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    unsigned int total;
    char *ptr;
    void *buff;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total = nmemb * size;

    buff = malloc(total);
    if (buff == NULL)
        return (NULL);

    ptr = (char *)buff;
    for (i = 0; i < total; i++)
        ptr[i] = 0;

    return (buff);
}
