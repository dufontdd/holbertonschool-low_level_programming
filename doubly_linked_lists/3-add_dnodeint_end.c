#include "lists.h"

/**
 * add_dnodeint - ajoute un nouveau noeud au début d'une dlistint_t
 * @head: adresse du pointeur vers le premier noeud
 * @n: valeur du nouveau noeud
 *
 * Return: adresse du nouveau noeud, ou NULL si échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
