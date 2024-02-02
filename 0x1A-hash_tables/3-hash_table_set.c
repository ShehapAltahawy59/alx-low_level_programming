#include "hash_tables.h"
/**
 * hash_table_set - short description
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: return description
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
		unsigned long int index;
		hash_node_t *new_node, *old_node;

		if (key == NULL || value == NULL || ht == NULL)
		{
			return (0);
		}
		if (strlen(key) == 0)
		{
			return (0);
		} 
		index = key_index(key,ht->size);
		new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (new_node == NULL)
		{
			return (0);
		}
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;

		if (ht->array[index] == NULL)
		{
				ht->array[index] = new_node;
				return (1);
		}
		else
		{
				old_node = ht->array[index];
				while (old_node)
				{
						if(strcmp(old_node->key, key) == 0)
						{
								free(old_node->value);
								old_node->value = strdup(value);
								free(new_node->key);
								free(new_node->value);
								free(new_node);
								return (1);
						}
						old_node = old_node->next;
				}
				
				new_node->next = ht->array[index];
				ht->array[index] = new_node;
				return (1);
		}
}
