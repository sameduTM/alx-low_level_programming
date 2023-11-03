#include "hash_tables.h"
/**
  * hash_table_set - adds an element to the hash table
  * @ht: pointer to hash table you want to update
  * @key: the key
  * @value: value associated with the key
  *
  * Return: 1 if success, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	index = key_index((const unsigned char *)key, ht->size);

	/* create new hash node */
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);

		return (0);
	}

	/* add new node at start of linked list */
	new_node->next= ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
