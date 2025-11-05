#include "main.h"

/** _memcpy - copier n octets de la zone memoire src vers dest
 * @n: nombre d'octets à remplir
 * @src: zonne mémoire source
 * @dest: zone memoire destination
 *
 * Return: pointeur vers dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return(dest);
}
