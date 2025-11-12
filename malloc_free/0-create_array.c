#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array to allocate
 * @c: char to initialize the array with
 * Return: pointer to the array, or NULL if it fails or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	buffer[i] = '\0';

	return (buffer);
}
