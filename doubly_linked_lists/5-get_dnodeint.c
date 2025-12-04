#include "lists.h"

/**
 * get_dnodeint_at_index - retourne le nœud à un index donné
 * @head: pointeur vers le début de la liste
 * @index: index du nœud à retourner
 *
 * Return: le nœud à cet index, ou NULL si inexistant
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head != NULL)
    {
        if (i == index)
            return (head);

        head = head->next;
        i++;
    }

    return (NULL);
}
