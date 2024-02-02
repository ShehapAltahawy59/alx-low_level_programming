#include "hash_tables.h"

/**
 * hash_table_delete - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *previous_node;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++ )
	{
		if (ht->array[index] != NULL && ht->array[index]->next == NULL)
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
		}
		else
		{
			node = ht->array[index];
			while (node != NULL)
			{
				free(node->key);
				free(node->value);
				previous_node = node;
				node = node->next;
				free(previous_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
