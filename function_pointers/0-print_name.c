#include "fonction_pointeurs.h"

/**
 * print_name - rappeler la fonction name 
 * @name: chaîne à afficher
 * @f(name): fonction qui prend un char * et affiche quelque chose
 *
 * Return: void
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
