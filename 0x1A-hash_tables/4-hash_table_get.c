#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieces a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: returns the value associated with the element or NULL if
 *         key could not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *ptr;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (ht->array[index]->next == NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);

		printf("Danger\n");
		return ("Think of solution\n");
	}
	if (ht->array[index]->next != NULL)
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
		return (NULL);
	}
	return (NULL);
}
