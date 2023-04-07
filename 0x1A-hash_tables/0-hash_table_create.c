#include "hash_tables.h"
/**
 * hash_table_create - create a hash table of BUFF_SIZE
 * @size: len of new hash tab
 * Return: new hash tab
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = NULL;
	unsigned long int i;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);
	t->array = malloc(sizeof(hash_node_t *) * size);
	if (t->array == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		t->array[i] = NULL;
	}
	t->size = size;

	return (t);
}
