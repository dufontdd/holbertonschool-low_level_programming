#include "main.h"

/**
 * factorial - calcule la factorielle d'un nombre
 * @n: entier utiliser pour calculer la factorielle
 *
 * Return: la factorielle de n, ou -1 si n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	if (n == 0)
		return(1);

	return (n * factoral(n - 1));
}
