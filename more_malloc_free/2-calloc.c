#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ecrire une fonction qui allouer de la mémoire,
 * pour un tableau, en utilisant `calloc`
 *@nmemb: tableau a allouer dans le tableau
 *@size: taille du tableau à allouer dans calloc
 *
 * Return: malloc ou NULL si malloc échoue
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *buff;
	unsigned int total;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	total = nmemb * size;

	buff = malloc(total);
	if (buff == 0)
		return (NULL);

	for (i = 0; i < total; i++)
		buff[i] = 0;

	return (buff);
}
