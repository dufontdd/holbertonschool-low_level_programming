#include <stdlib.h>
#include "main.h"

/**
 * _strdup - renvoie un pointeur vers une nouvelle chaîne de caractères,
 *  copie de la chaîne `str`. La mémoire est allouée
 *  @str chaîne source
 *
 *  Return: pointeurvers la nouvelle chaîne, ou NULL si erreur
 */
char *_strdup(char *str)
{
	char *buffer;
	unsigned int i, size;

	if (str == NULL)
		return(NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	buffer = malloc(sizeof(char) * (size + 1));
	if (buffer == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
		buffer[i] = str[i];
	buffer[i] = '\0';


	return(buffer);
}
