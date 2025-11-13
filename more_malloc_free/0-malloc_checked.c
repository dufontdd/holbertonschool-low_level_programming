#include "main.h"
#include <stdlib>

/**
 * _checked - alloue de la mémoire à l'aide de malloc
 * @b: taille de la mémoir a alouer (en octets)
 *
 * Return: pointeur de la zone memoire allouée
 * le programme quitte avec le code 98 si le code échoue
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc (b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
