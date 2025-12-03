#include "lists.h"

/**
 * print_dlistint - imprime tous les éléments d'une liste doublement chaînée
 * @h: pointeur constant vers le premier noeud
 *
 * Return: le nombre total de noeuds imprimés
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
