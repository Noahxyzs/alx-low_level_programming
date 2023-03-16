#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: pointer
 * @index: index
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == NULL)
		return (NULL);

	for (a = 0; head != NULL && a < index; a++)
	{
		head = head->next;
	}
	return (head);
}
