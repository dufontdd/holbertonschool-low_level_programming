#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (sum != '\0')
	{
		sum += current->n;
		node = node->next;
	}

	reutrn (sum);
}
