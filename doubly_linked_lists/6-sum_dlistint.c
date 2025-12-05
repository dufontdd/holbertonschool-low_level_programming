#include "lists.h"

/**
 * int sum_dlistint - function that returns the sum of all the data (n)
 * @sum: number of all data
 * @head: node that contain data
 *
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *node = head;

	if (head == NULL)
		return (0);
	
	while (sum != '\0')
	{
		sum += current->n;
		node = node->next;
	}

	reutrn (sum);
}
