#include "main.h"

/**
 * _strchr - fonction qui localise,
 * un caractère dans une chaîne de caractères.
 * @c: le caractère a trouver
 * @s: chaîne source de recherche
 *
 * Return: pointeur de la chaîne s,
 * ou 'NULL'si le caractère est introuvable
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return(&s[i]);
	}

	return(NULL);
}
