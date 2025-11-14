#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alloue de la mémoire pour un tableau et l'initialise à zéro
 * @nmemb: nombre d'éléments à allouer
 * @size: taille de chaque élément en octets
 *
 * Description: Alloue dynamiquement un tableau de nmemb éléments
 * de size octets chacun. Chaque octet est initialisé à zéro.
 * Si nmemb ou size vaut 0, ou si malloc échoue, la fonction
 * retourne NULL.
 *
 * Return: pointeur vers la mémoire allouée ou NULL si échec
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *buff;
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
		buff[i] = NULL;

	return (buff);
}
