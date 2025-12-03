#include "lists.h"

/**
 * add_node_end - ajoute un nouveau noeud à la fin d'une liste list_t
 * @head: adresse du pointeur vers le premier élément de la liste
 * @str: chaîne à dupliquer pour le nouveau noeud
 *
 * Return: adresse du nouveau noeud, ou NULL en cas d'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* calcul de la longueur */
	while (str[len] != '\0')
		len++;

	new_node->len = len;
	new_node->next = NULL;

	/* si la liste est vide */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* sinon on parcourt jusqu'au dernier noeud */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
