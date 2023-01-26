#include <stdlib.h>
#include "lists.h"

/**
 * list_len - linked list
 * @h: pointer list
 * Return: n
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
