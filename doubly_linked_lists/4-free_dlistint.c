#include "lists.h"

/**
 * free_dlistint - libère une liste doublement chaînée dlistint_t
 * @head: pointeur vers le premier noeud
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
