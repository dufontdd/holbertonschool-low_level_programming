#include "fonction_pointeurs.h"
#include <stdio.h>

/**
 * print_name - print a name using a function pointer 
 * @name: the name to print
 * @f(name): pointer to a function that takes a char* and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		name = NULL;
	if (f == NULL)
		f = NULL;
	return;

	f(name);
}
