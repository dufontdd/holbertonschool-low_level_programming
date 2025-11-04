#include "main.h"

/**
 * _memset - utiliser cette fonction dans le bloc de code pour,
 * remplir la mémoire avec un octet constant.
 *
 * @n: nombre d'octets à remplir
 * @s: pointeur vers la zone mémoire à remplir
 * @b: octets constant à copier
 *
 * Return: vers le pointeur de la zone mémoire s.
 */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;
		i = 0;
		for (; i < n; i++)
		{
			s[i]= b;
		}
		return(s);
}
