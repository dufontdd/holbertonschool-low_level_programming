#include "main.h"

/**
 * _strcat - concatène la chaine src à la fin de dest peut avoir,
 * un caratère non nul si elle contien n octets
 * @dest: destination de la chaine
 * @src: source de la chaine
 * @n: nobre max de caractère a copier depuis src
 *
 *  Return: pointeur dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	

	/* trouver la fin de dest */
	for (i = 0; dest[i] != '\0'; i++)
	;

	/* lie src a dest en ajoutant n a src */
	for (j = 0; j < n && src[j] != '\0'; j++,i++)
	dest[i] = src[j];
	

	/*finir dest avec dest */
	dest[i] = '\0';

	return (dest);
}
