#include "main.h"

/**
 * _strlen_recursion - permet de calculer la longeur d'une chaîne
 * @s: connaîtr la longeur de la chaîane
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return(0);

	return( 1 + _strlen_recursion(s + 1));
}
