#include "hash_tables.h"
/**
  * hash_table_get - retrieve value associated with key
  * @ht: pointer to hash table to look into
  * @key: key we are looking for
  *
  * Return: value associated with key, otherwise NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	/* traverse the linked list at calculated index */
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return current->value;

		current = current->next;
	}

	return (NULL);
}
