#include "main.h"
#include <stdlib.h>

/**
 * create_array - créé un tableau de caractères
 * @size: taille du tableau à allouer
 * @c: caractère d’initialisation
 *
 * Return: pointeur vers le tableau, ou NULL si size = 0 ou si l’allocation échoue
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
