#include "hash_tables.h"
/**
 * hash_table_set - creates a new node in the hashtable
 * @ht: pointer to the hashtable
 * @key: key
 * @value: value to place in the node
 * Return: 1  in success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n = malloc(sizeof(hash_node_t));
	unsigned long int x;
	hash_node_t *temp;

	if (ht == NULL || key == '\0' || *key == '\0')
		return (0);
	if (n == NULL)
		return (0);
	n->key = strdup(key);
	n->value = strdup(value);
	x = key_index((unsigned char *)key, ht->size);
	if (ht->array[x] != NULL)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			if (strcmp(temp->key, n->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			n->next = ht->array[x];
			ht->array[x] = n;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(n->value);
			free(n->value);
			free(n->key);
			free(n);
		}
	}
	else
	{
		n->next = NULL;
		ht->array[x] = n;
	}
	return (1);
}
