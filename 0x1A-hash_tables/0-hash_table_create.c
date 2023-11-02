#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: size of hash table
 *
 * Return: pointer address of hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	/* allocate memory for hash table structure */
	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	/* allocate memory for the array of hash nodes */
	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;

	/* initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}