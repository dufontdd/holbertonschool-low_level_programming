#include <main.h>

/**
 * _isdigit - affiche une suite de nbombre de 0 à 9
 * @ 0 - 9: La suite de nombre a afficher.
 *
 * Return: 1 si un chifre est affiché, 0 sinon.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	else
		return(0)
}
