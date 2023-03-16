#include "lists.h"

/**
 * sum_dlistint - add
 * @head: pointer
 * Return: total
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	for (total = 0; head != NULL; head = head->next)
		total = total + head->n;
	return (total);
}
