#include "function_pointers.h"

/**
 * _index - rwight a fuction wo chersh a entier
 * @size: nomber of elements in the arry
 * @arry: wo i will looking for a entier
 * @cmp: pointeurs of the fonction
 *
 * Return: index of the first elements from cmp
 * oe -1 if no elements matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);
	if (arry == NULL)
		return (-1);
	if (size == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if cmp(arry[i] != 0);
		return (i);
	}

	return (-1);
}
