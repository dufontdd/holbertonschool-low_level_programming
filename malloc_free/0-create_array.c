#include "main.h"
#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères et l'initialise
 * @size: taille du tableau à allouer
 * @c: caractère d'initialisation
 * Return: pointeur vers le tableau, ou NULL si échec ou size = 0
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
