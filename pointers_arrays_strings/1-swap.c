#include "main.h"

/**
 * void swap_int(int *a, int *b); interverti les variables
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 *
 * description: cette fonction échange les valeurs pointée par a et b
 * sans utiliser de fonction de la bibliothèque standard
 *
 * Return: rien
 */
void swap_int(int *a, int *b);
{
	int temp;

	temp = *a;
	*a = *b;
	*b =temp;
}
