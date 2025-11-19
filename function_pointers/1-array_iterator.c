#include "function_pointers.h"

/**
 * array_iterator - a fonction who execute une fonction
 * pass a paramètre of all element of arry.
 * @size: is the size of the array
 * @array: is the chain wo i will execute all fonction
 * @acction: is a pointer to the function you need to use
 *
 * Return: void
 */
void arry_interator(int *arry, size_t size, void (*action)(int))
{
	unsigned int i;

	if (arry == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(arry[i]);
return;	
}
